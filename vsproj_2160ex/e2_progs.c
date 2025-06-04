/*
	EECE.2160: ECE Application Programming
	Instructor: M. Geiger

	Program ideas/solutions for Spring 2025 Exam 2
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prog1();
void prog2();
void prog3();

int main() {
	int num;
	printf("Problem #: ");
	scanf("%d", &num);

	switch (num) {
	case 1:
		prog1();
		break;
	case 2: 
		prog2();
		break;
	case 3:
		prog3();
		break;
	default:
		printf("What the fuck are you doing?\n");
	}

	return 0;
}

// Input validation program
void prog1() {
	int v1, v2, v3;
	int flag;
	int attempts = 5;

	do {
		flag = 0;

		printf("\nEnter triangle sides: ");
		scanf("%d %d %d", &v1, &v2, &v3);

		if (v1 <= 0) {
			printf("Invalid side 1: %d\n", v1);
			flag++;
		}
		if (v2 <= 0) {
			printf("Invalid side 2: %d\n", v2);
			flag++;
		}
		if (v3 <= 0) {
			printf("Invalid side 3: %d\n", v3);
			flag++;
		}

		if (flag == 0) {
			if (v1 + v2 <= v3 || v1 + v3 <= v2 || v2 + v3 <= v1) {
				printf("Invalid triangle\n");
				flag = 1;
			}
		}

		if (flag > 0) attempts--;
	} while (flag != 0 && attempts > 0);

	if (attempts > 0)
		printf("\nValid triangle; %d attempts left\n", attempts);
	else
		printf("\nOut of attempts!\n");
}



// Pointer arg program
void prog2() {
	// UNUSED
}

int sum_proper_divisors(int n) {
	int sum = 0;

	for (int i = 1; i < n; i++) {
		if (n % i == 0)
			sum += i;
	}

	return sum;
}

int classify(int n) {
	int s = sum_proper_divisors(n);

	if (s == n)
		return 1;
	else if (s > n)
		return 2;
	else
		return 3;
}

// Non-pointer arg program
void prog3() {
	int r;

	for (int i = 1; i <= 10; i++)
		printf("%d ", sum_proper_divisors(i * i * i));


	for (int i = 2; i <= 30; i += 2) {
		r = classify(i);
		switch (r) {
		case 1:
			printf("%d is a perfect number\n", i);
			break;
		case 2:
			printf("%d is an abundant number\n", i);
			break;
		case 3:
			printf("%d is a deficient number\n", i);
			break;
		default:
			printf("classify() returns a value it shouldn't\n");
		}
	}

}