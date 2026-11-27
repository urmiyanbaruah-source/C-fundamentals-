/*5. Write a program to determine whether a character entered by the user is lowercase or
not.*/

//Alright, so I thought about this for a LONG time and what I figured out is that I have no idea how to do this, other than the utterly tedious way of typing the whole alphabet with || in capital for the if, then lowercase for else.
//Since I know of any better option right now, that's all I can do now.

// #include <stdio.h>

// int main() {
//     char alphabet;

//     printf("Enter a letter from the alphabet in either uppercase or lowercase.\n");
//     printf("Enter your letter: ");
//     scanf(" %c", &alphabet);

//     if (alphabet == 'A' || alphabet == 'B' || alphabet == 'C' || alphabet == 'D' || alphabet == 'E' || alphabet == 'F' || alphabet == 'G' || alphabet == 'H' || alphabet == 'I' || alphabet == 'J' || alphabet == 'K' || alphabet == 'L' || alphabet == 'M' || alphabet == 'N' || alphabet == 'O' || alphabet == 'P' || alphabet == 'Q' || alphabet == 'R' || alphabet == 'S' || alphabet == 'T' || alphabet == 'U' || alphabet == 'V' || alphabet == 'W' || alphabet == 'X' || alphabet == 'Y' || alphabet == 'Z' ) {
//         printf("The letter you entered is an Uppercase letter.");
//     }

//     else {
//         printf("The letter you entered is a lowercase letter.\n");
//     }
//     return 0;
// }
//I know that this is probably a really bad habit to do it this way, but I wanted that pain of doing it the right way so when I finally find the right way, I'll remember it much longer.

//Harry's version: So here is where he finally teaches about ASCII values.

#include <stdio.h>

int main() {
    char alphabet;

    printf("Enter a letter from the alphabet in either uppercase or lowercase.\n");
    printf("Enter your letter: ");
    scanf(" %c", &alphabet);

    if (alphabet >= 97 && alphabet <=122) {
        printf("The letter you entered is lowercase\n");
    }

    else if (alphabet >= 65 && alphabet <= 90) {
        printf("The letter you entered is uppercase\n");
    }
    return 0;
}