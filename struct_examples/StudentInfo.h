/*
 * EECE.2160 ECE Application Programming
 *
 * StudentInfo.h: StudentInfo struct definition & prototypes
 */

typedef struct {
	char first[50];		// First name
	char middle;		// Middle initial
	char last[50];		// Last name
	unsigned ID;		// Student ID number
	double GPA;			// Grade point average
} StudentInfo;

// Print contents of StudentInfo struct
void printStudent(StudentInfo* sp);

// Calculate average GPA for array of students
double avgGPA(StudentInfo stlist[], unsigned n);

// Read info about student and return struct
StudentInfo readStudent();