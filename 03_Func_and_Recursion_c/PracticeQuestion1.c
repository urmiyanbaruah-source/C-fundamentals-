/*1. Write a program using function to find average of three numbers.*/

#include <stdio.h>

float average (int a, int b, int c) {
    float avg = (a + b + c)/3.0;
    return avg;
} 
int main() {    
    int a;
    int b;
    int c;

    printf("Find the avgerage of 3 numbers.\n");
    printf("Enter numbers a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The average of numbers %d, %d, and %d is %f\n", a, b, c, average(a, b, c));
    return 0;
} 

//Harry's version: 
//I got my mistake here...I'm using int while obviously we should use float for average. Should I maybe make it a habit to always use float while using division?

// #include <stdio.h>

// float average (int a, int b, int c) {     //I should probably use float a, float b, float c here, but only if I'm not using return (a + b + c)/3.0 in the next line, which is easier, so that's what I'm going to do instead.
//     return (a + b + c) / 3.0;   //If we used float a, float b, float c then here we could get away with using just 3 and not 3.0. It's actually a subtle thing to miss and Harry made this embarassing mistake as well.
// }
// int main() {
//     int a = 3, b = 6, c = 5;
//     printf("The average of a, b and c is %f\n", average(a, b, c));
//     return 0;
// }