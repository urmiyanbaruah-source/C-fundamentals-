/*
Quick quiz: Write a program to find grade of a student given his marks based on below:
Marks Range
90 – 100 ⇒ A
80 – 90 ⇒ B
70 – 80 ⇒ C
60 – 70 ⇒ D
50 – 60 ⇒ E
<50 ⇒ F
*/

// As you said, I first used hard coded values like int marks = 70;, then used user input values.

// #include <stdio.h>

// int main() {
//     int marks;

//     printf("Enter your marks : ");
//     scanf("%d", &marks);

//     if (marks > 100) {
//         printf("Invalid\n");
//     }

//     //Putting the greater than 100 condition didn't work as the last else if, so I had to put it first, which already doesn't seem right.
//     else if (marks >= 90) {
//         printf("Grade A\n");
//     }

//     else if (marks >= 80) {
//         printf("Grade B\n");
//     }

//     else if (marks >= 70) {
//         printf("Grade C\n");
//     }

//     else if (marks >= 60) {
//         printf("Grade D\n");
//     }

//     else if (marks >= 50) {
//         printf("Grade E\n");
//     }

//     else if (marks < 50) {
//         printf("Grade F\n");
//     }

//     return 0;
// }

// An interesting thing I've found is that else does not take any condition statements. Here, when I typed "else (marks > 100) {...}, it gave an error, so I had to switch it back to else if."

// Now, Harry's version. He used logical operators here...I think it'll take me a while to get these down intuitively-

#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks <= 100 && marks >= 90)
    {
        grade = 'A';
        printf("Your Grade : %c\n", grade);
    }

    else if (marks < 90 && marks >= 80)
    {
        grade = 'B';
        printf("Your Grade : %c\n", grade);
    }
    else if (marks < 80 && marks >= 70)
    {
        grade = 'C';
        printf("Your Grade : %c\n", grade);
    }
    else if (marks < 70 && marks >= 60)
    {
        grade = 'D';
        printf("Your Grade : %c\n", grade);
    }
    else if (marks < 60 && marks >= 50)
    {
        grade = 'E';
        printf("Your Grade : %c\n", grade);
    }

    else
    {
        grade = 'F';
        printf("Your Grade : %c\n", grade);
    }

    return 0;
}

// This version seems more complex...I had to debug a couple of times for it to work.