/*6. Write a program to find greatest of four numbers entered by the user.*/

//For this one also, I thought about it for a really long time, and I didn't even have a harder, tedious way of doing it like question 5. I could compare every number with other numbers and use && to do with the other permutations, but...it feels wrong and tedious again? I asked gemini for a super small hint, but it gave me the most elaborate hint ever😭.

// #include <stdio.h>

// int main() {
//     int a, b, c, d, max;

//     printf("Enter 4 numbers\n\n");

//     printf("Enter first number: ");
//     scanf("%d", &a);

//     printf("Enter second number: ");
//     scanf("%d", &b);

//     printf("Enter third number: ");
//     scanf("%d", &c);

//     printf("Enter fourth number: ");
//     scanf("%d", &d);

//     max = a;

//     if (max < b) {
//         max = b;
//     }
//     if (max < c) {
//         max = c;
//     }
//     if (max < d) {
//         max = d;
//     }

//     printf("The greatest number among the four numbers entered: %d\n", max);

//     return 0;
// }

//I admit, I could have never thought of this on my own.

//Harry's version: Wow, this was a lot easier than I thought. I feel kinda bad about it...how did I not figure this out? Even Harry said that it was pretty easy and everyone could find it out. I think if I'd just follow what I was thinking initually, I could've done it, like this part - "I could compare every number with other numbers and use && to do with the other permutations, but...it feels wrong".

#include <stdio.h>

int main() {
    int a, b, c, d, max;

    printf("Enter 4 numbers\n\n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    printf("Enter fourth number: ");
    scanf("%d", &d);

    if (a > b && a > c && a > d) {
        printf("The greatest number among the four is %d\n", a);
    }

    else if (b > a && b > c && b > d) {
        printf("The greatest number among the four is %d\n", b);
    }

    else if (c > a && c > b && c > d) {
        printf("The greatest number among the four is %d\n", c);
    }

    else if (d > a && d > b && d > c) {
        printf("The greatest number among the four is %d\n", d);
    }

    return 0;
}