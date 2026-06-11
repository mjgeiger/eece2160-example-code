/*
    EECE.2160: ECE Application Programming
    Instructor: M. Geiger
    4/29/2026

    Examples of bitwise operators
    Changing individual bit; isolating multiple bits
*/

#include <stdio.h>
#include <string.h>

// Bitmasks for working with each LED
#define LED0MASK 0x00000001
#define LED1MASK 0x00000002
#define LED2MASK 0x00000004
#define LED3MASK 0x00000008

// Bitmasks for isolating individual byte
#define BYT0MASK 0x000000FF     // "byte 0" = least significant byte
#define BYT1MASK 0x0000FF00
#define BYT2MASK 0x00FF0000
#define BYT3MASK 0xFF000000     // "byte 3" = most significant byte

int main() {
    unsigned LEDs = 0;              // "Register" to control "LEDs"
    unsigned data = 0xDEADBEEF;     // Data "register"   
    unsigned mask;                  // Bitmask to be used in desired operation

    char cmd[50];                   // Input command
    unsigned posn;                  // Input position

    // Repeatedly read command/position
    do {
        printf("Enter command: ");
        scanf("%s", cmd);

        // Isolate and display desired byte(s) from "data"
        if (strcmp(cmd, "data") == 0) {
            printf("Enter byte to display (0 = LSB, 3 = MSB): ");
            scanf("%u", &posn);
        
            unsigned result;
            
            switch (posn) {
                case 0:     
                    result = data & BYT0MASK;   
                    break;
                case 1:
                    result = (data & BYT1MASK) >> 8;
                    break;
                case 2:
                    result = (data & BYT2MASK) >> 16;
                    break;
                case 3:
                    result = (data & BYT3MASK) >> 24;
                    break;
                default:
                    result = data;
            }

            printf("Byte %u: %#x\n", posn, result);
        }

        // As long as command isn't "exit", working with "LEDs"
        else if (strcmp(cmd, "exit") != 0) {
            printf("Enter LED position (0-3): ");
            scanf("%u", &posn);     // Read position
            switch (posn) {         //  and select appropriate bitmask

                case 0:     mask = LED0MASK;    break;
                case 1:     mask = LED1MASK;    break;
                case 2:     mask = LED2MASK;    break;
                case 3:     mask = LED3MASK;    break;
                default:    mask = 0xFFFFFFFF;
            }

            // Turn on desired LED --> set corresponding bit to 1 with OR
            if (strcmp(cmd, "on") == 0)
                LEDs = LEDs | mask;

            // Turn off desired LED --> set corresponding bit to 0 with AND
            //   Bitmask needs to be inverted --> 0 in position to clear
            else if (strcmp(cmd, "off") == 0)
                LEDs = LEDs & ~mask;
            
            // Flip desired LED --> invert corresponding bit with XOR
            else if (strcmp(cmd, "flip") == 0)
                LEDs = LEDs ^ mask;

            // Indicate whether each LED is "on" (1) or "off" (0)
            //   Print statements use ternary operator ? :
            //   Basic form:   <condition> ? <value if T> : <value if F>
            //   So, for example, the expression:
            //      (LEDs == 0) ? "zero" : "not zero"
            //   will evaluate to "zero" if the condition is true
            //            and "not zero" if the condition is false
            printf("LED states:\n");
            printf("LED0: %s\n", LEDs & LED0MASK ? "on" : "off");
            printf("LED1: %s\n", LEDs & LED1MASK ? "on" : "off");
            printf("LED2: %s\n", LEDs & LED2MASK ? "on" : "off");
            printf("LED3: %s\n", LEDs & LED3MASK ? "on" : "off");
        }

    } while (strcmp(cmd, "exit") != 0);
}