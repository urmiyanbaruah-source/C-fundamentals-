/*4. Write a program to find whether a year entered by the user is a leap year or not. Take
year as an input from the user.*/

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year to check whether it is a leap year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        printf ("The year %d is a leap year.\n", year);
    }
    else {
        printf("The year %d is not a leap year.\n", year);
    }
    return 0;
}

//Quite easy this one...

//Harry's version: So even this one was slightly wrong. I didn't know there was a bigger calculation for leap years.

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year to check whether it is a leap year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf ("The year %d is a leap year.\n", year);
    }
    else {
        printf("The year %d is not a leap year.\n", year);
    }
    return 0;
}