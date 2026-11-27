// Just some simple experiments, and I'm doing this after watching the whole video and doing the quiz too(not the practice sheet yet). Also,  as you said, I first tried these things with hard coded values and later tried with user inputs.

// #include <stdio.h>

// int main() {
//     int age;

//     printf("Enter your age : ");
//     scanf("%d", &age);

//     if (age > 65) {
//         printf("This person can drive, but is also a senior citizen\n");
//     }

//     else if (age>=18){
//         printf("This person can drive\n");
//     }

//     else {
//         printf("This person does not have a license to drive\n");
//     }
//     return 0;
// }

// Another interesting thing I've found is that while  writing if-else if-else ladders, we should write the statements in descending order for a valid and correct output. Atleast in this case, where I initially added the "this person can drive" first as the if statement, which does work but doens't let the  else if statement execute when it needs to. Do tell me if I'm correct.
//(SIDENOTE: After doing a few more experiments and the preactice questions, I figured out this- while using (<) type operators, we should use ascending order, and for (>) type operators, we use descending order.)

// Another better way to write this is probably this-

// #include <stdio.h>

// int main() {
//     int age;

//     printf("Enter your age : ");
//     scanf("%d", &age);

//     if (age>=18 && age<=65) {
//         printf("This person can drive\n");
//     }

//     else if (age>65 && age<90) {
//         printf("This person can drive, but is also a senior citizen\n");
//     }

//     else {
//         printf("This person does not have a license to drive (Either too young or too old to drive).\n");
//     }
//     return 0;
// }

// I don't really like the else statement...they'r harder to predict and I don't really know what they'll do. I'd much rather write this code like this-

// #include <stdio.h>
// int main() {
//     int age;

//     printf("Enter your age : ");
//     scanf("%d", &age);

//     if (age>=18 && age<=65) {
//         printf("This person can drive\n");
//     }

//     else if (age>65 && age<90) {
//         printf("This person can drive, but is also a senior citizen\n");
//     }

//     else if (age<18 || age>=90){
//         printf("This person does not have a license to drive (Either too young or too old to drive).\n");
//     }
//     return 0;
// }

// 2nd experiment using logical operators. Harry didn't do this, but I wanted to experiment.

// #include <stdio.h>

// int main()
// {
//     int a1, b1, y1, m1, a2, b2, y2, m2, a3, b3, y3, m3, a4, b4, y4, m4, a5, b5, y5, m5, sum;

//     printf("1. Enter value of a, b so that a and b = 1\n");

//     printf("Enter value of a : ");
//     scanf("%d", &a1);

//     printf("Enter value of b : ");
//     scanf("%d", &b1);

//     y1 = a1 && b1;
//     printf("Result of a and b : %d\n", y1);

//     if (y1 == 1)
//     {
//         m1 = 1;
//         printf("Right Answer! You earn 1 point.\n\n");
//     }
//     else
//     {
//         m1 = 0;
//         printf("Wrong answer, no points earned.\n\n");
//     }

//     printf("2. Enter value of a, b so that a and b = 0\n");

//     printf("Enter value of a : ");
//     scanf("%d", &a2);

//     printf("Enter value of b : ");
//     scanf("%d", &b2);

//     y2 = a2 && b2;
//     printf("Result of a and b : %d\n", y2);

//     if (y2 == 0)
//     {
//         m2 = 1;
//         printf("Right Answer! You earn 1 point.\n\n");
//     }
//     else
//     {
//         m2 = 0;
//         printf("Wrong answer, no points earned.\n\n");
//     }
//     printf("3. Enter value of a, b so that a or b = 1\n");

//     printf("Enter value of a : ");
//     scanf("%d", &a3);

//     printf("Enter value of b : ");
//     scanf("%d", &b3);

//     y3 = a3 || b3;
//     printf("Result of a and b : %d\n", y3);

//     if (y3 == 1)
//     {
//         m3 = 1;
//         printf("Right Answer! You earn 1 point.\n");
//     }
//     else
//     {
//         m3 = 0;
//         printf("Wrong answer, no points earned.\n");
//     }

//     if (m1 == 1 && m2 == 1 && m3 == 1)
//     {
//         printf("Congratulations! All answers correct, you earned %d points.\n", sum = m1 + m2 + m3);
//         printf("Bonus questions:\n\n");

//         printf("4. Enter value of a, b so that not(a and b) = 1\n");

//         printf("Enter value of a : ");
//         scanf("%d", &a4);

//         printf("Enter value of b : ");
//         scanf("%d", &b4);

//         y4 = !(a4 && b4);
//         printf("Result of a and b : %d\n", y4);

//         if (y4 == 1)
//         {
//             m4 = 1;
//             printf("Right Answer! You earn 1 point.\n");
//         }
//         else
//         {
//             m4 = 0;
//             printf("Wrong answer, no points earned.\n");
//         }

//         printf("5. Enter value of a, b so that not(a or b) = 1\n");

//         printf("Enter value of a : ");
//         scanf("%d", &a5);

//         printf("Enter value of b : ");
//         scanf("%d", &b5);

//         y5 = !(a5 || b5);
//         printf("Result of a and b : %d\n", y5);

//         if (y5 == 1)
//         {
//             m5 = 1;
//             printf("Right Answer! You earn 1 point.\n");
//         }
//         else
//         {
//             m5 = 0;
//             printf("Wrong answer, no points earned.\n");
//         }

//         if (m4 == 1 && m5 == 1) {
//             printf("WE HAVE A WINNER! CONGRATULATIONS!! YOU WIN %d POINTS!!!\n", sum = m1 + m2 + m3 + m4 + m5);
//         }

//         else {
//             printf ("Congratulations on scoring bonus marks! You win %d points\n", sum = m1 + m2 + m3 + m4 + m5);
//         }
//     }

//     else {
//         printf("Congratulations! you earned %d points.\n", sum = m1 + m2 + m3);
//     }
//     return 0;
// }

// Code to right answers for testing :
// 1) 1 1
// 2) 1 0
// 3) 1 0
// 4) 1 0
// 5) 0 0

// THIS WORKED OUT EXACTLY HOW I INTENDED TO! I spent a lot of time of this one...sort of proud about this one, even if it's really simple.

// 3rd Experiment for ternary operators. They don't seem that important to me, so didn't really experiment that much with it.

// #include <stdio.h>

// int main() {
//     int age;

//     printf("Enter your age : ");
//     scanf("%d", &age);

//     (age>=18 && age<=65) ? printf("This person can drive\n")
    

//     : (age>65 && age<90) ? printf("This person can drive, but is also a senior citizen\n")
    

//     : printf("This person does not have a license to drive (Either too young or too old to drive).\n");
    
//     return 0;
// }

//5th Experiment for switch case.

// #include <stdio.h>

// int main() {
//     char grade;
//     printf("Enter your grade : ");
//     scanf(" %c", &grade);

//     switch (grade) {
//         case 'A':
//         case 'B':
//         case 'C':
//             printf("Congratulations, you have passed!\n");
//             break;
//         case 'D':
//         case 'F':
//             printf("You have failed.\n");
//             break;
//         default:
//             printf("Invalid Response...\n");
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
    float a = (40.0/100.0)*300.0;
    printf("Result : %f\n", a);
    return 0;
}
//This is how I figured out why Q.2 of the practice sheet wasn't working. Don't look too much into it...you'll know why I tried this once I give you my answers to the practice sheet.
