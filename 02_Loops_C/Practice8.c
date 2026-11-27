//8.  Write a program to calculate the factorial of a given number using a for loop.

// #include <stdio.h>

// int main() {
//     int n, x = 1 ;
//     printf("Enter a number to get it's factorial.\n");
//     printf("Input: ");
//     scanf("%d", &n);

//     for (int i = n; i; i--)
//     {
//         x *= i;
//     }
//     printf("The factorial of %d is %d\n", n, x);
//     return 0;
// }

//Now, since this works, I want to try a bit of formatting for this one.


// #include <stdio.h>

// int main() {
//     int n, x = 1 ;
//     printf("Enter a number to get it's factorial.\n");
//     printf("Input: ");
//     scanf("%d", &n);

//     for (int i = n; i > 1; i--)
//     {
//         printf("%d x ", i);
//         x *= i;
//     }
//     printf("1 = %d\n", x);
//     return 0;
// }

//  I thought about this for a really long time 😭...hope it's valid.

//Harry's verson:

#include <stdio.h>

int main() {
    int product = 1; //I really have to start using meaningful variable names and stop using stuff like x, y, z, etc. 😭.
    int n = 0;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial is %d\n", product);    
    return 0;
}