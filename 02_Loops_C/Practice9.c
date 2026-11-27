//9. Repeat 8 using while loop.

// #include <stdio.h>

// int main() {
//     int n, factorial = 1 ;
//     printf("Enter a number to get it's factorial.\n");
//     printf("Input: ");
//     scanf("%d", &n);

//     int i = n;
//     while (i) {
//         factorial *= i;
//         i--;
//     }
//     printf("The factorial of %d is %d\n", n, factorial);
//     return 0;
// }

//Harry's version:

#include <stdio.h>

int main() {
    int product = 1;
    int i = 1;
    int n = 5;

    while (i <= 5) {
        product *= i;
        i++;
    }
    printf("The factorial of %d is %d\n", n, product);
    return 0;
}