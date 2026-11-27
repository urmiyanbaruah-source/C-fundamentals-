//10. Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

// int main() {
//     int i, n;
//     printf("Enter a number to check if it is prime or not.\n");
//     printf("Input: ");
//     scanf("%d", &n);
//     if (n < 2) {
//         printf("%d is NOT a prime number.\n", n);
//     }
//     else {
//         for (i = 2; i < n; i++) {
//             if (n % i == 0) {
//                 printf("%d is NOT a prime number.\n", n);
//                 break;
//             }   
//         }
//         if (i == n) {
//             printf("%d is a prime number.\n", n);
//         }
//     }
//     return 0;
// }

//Harry's version:

#include <stdio.h>

int main() {
    int n = 2;
    int not_prime = 0;

    if (n == 0 || n == 1)//WWhich is basically n<2
    {
        printf("%d is NOT prime.\n", n);
    }
    else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0 && n != 2) 
            {
                not_prime = 1;
                break;
            }   
        }
    
        if (not_prime) {
            printf("%d is NOT a prime number.\n", n);
        }
        else {
            printf("%d is a prime number.\n", n);
        }
    }
    return 0;
}

//Q10 was honestly way more complex that I thought it would.