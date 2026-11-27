/*Build a program that asks the user for two integers and determines whether:
Both numbers are positive → print "Both are positive"
At least one is positive → print "At least one is positive"
Neither is positive → print "Neither is positive"*/

// #include <stdio.h>

// int main() {
//     int a, b;

//     printf("Enter 2 numbers which are possitive or negative\n");

//     printf("Enter 1st number: ");
//     scanf("%d", &a);

//     printf("Enter 2nd number: ");
//     scanf("%d", &b);

//     if (a < 0 && b < 0) {
//         printf("Both are negative\n");
//     }

//     else if (a < 0 || b < 0) {
//         printf ("At least one is negative\n");
//     }

//     else {
//         printf("Neither is negative\n");
//     }
//     return 0;
// }

//Build part 2.

/*Task: Student Admission Checker
Imagine a college has these rules:
A student gets admission if:
Their marks are 70 or above
AND their attendance is 75% or above
However:
A student gets special admission if:
Their marks are above 90
OR their attendance is above 95%
Write only the if-else if-else structure.*/

#include <stdio.h>

int main() {
    int marks, attendance;

    printf("Enter your marks and attendance to evaluate your admission.\n\n");
    printf("Enter your marks: ");
    scanf("%d", &marks);

    printf("Enter your attendance percentage: ");
    scanf("%d", &attendance);

    if (marks >= 90 || attendance >= 95) {
        printf("Admission granted through special admission!\n");
    }
    else if (marks >= 70 && attendance >=75) {
        printf("Admission granted!\n");
    }
    else {
        printf("Rejected.\n");
    }
    return 0;
}

