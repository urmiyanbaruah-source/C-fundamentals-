//11. Implement 10 using other types of loops.

//a. Using while loop.

// #include <stdio.h>

// int main() {
//     int is_prime = 0, i = 2, n;
//     printf("Enter a number to check if it is prime or not.\n");
//     printf("Input: ");
//     scanf("%d", &n);

//     if (n < 2) { //First if for numbers less than 2.
//         printf("%d is NOT a prime number.\n", n);
//     }

//     else { //Else for the prime number checking loop for numbers 2 and greater.
//         while (i < n)
//         {
//             if (n % i == 0) { //Flagging area.
//                 is_prime = 1; //updating is_prime to True if n is divisible by any number inside the loop.
//                 break; //Almost forgot the break here.
//             }
//             i++;
//         }
        
//         if (is_prime) { //If is_prime updates to 1 in the flagging area.
//             printf("%d is NOT a prime number.\n", n);
//         }
//         else { //If is_prime remains 0 and our assumption is not flagged.
//             printf("%d is a prime number.\n", n);
//         }
//     }
//     return 0;
// }

//b. Using do while loops.

// #include <stdio.h>

// int main() {
//     int is_prime = 0, i = 2, n;
//     printf("Enter a number to check if it is a prime number or not.\n");
//     printf("Input: ");
//     scanf("%d", &n);

//     if (n < 2)
//     {
//         printf("%d is NOT a prime number.\n", n);
//     }
//     else {
//         do
//         {
//             if (n % i == 0 && n != 2)
//             {
//                 is_prime = 1;
//                 break;
//             }
//             i++;
//         } while (i < n); //Oh my god, I went crazy here. I just translated the upper program to do while loop and assumed it work but 2 kept showing that it's Not prime. This is where && n != 2 comes into play. I knew Harry wouldn't do something unnecessarily. Since the first iteration will always run no matter what, is_prime will always update to 1 when we enter 2. Gosh...I spent a good few minutes thinking about this one.
        
//         if (is_prime)
//         {
//             printf("%d is NOT a prime number.\n", n);
//         }
//         else {
//             printf("%d is a prime number.\n", n);
//         }
//     }
//     return 0;
// }

//Harry's version:

#include <stdio.h>

int main() {
    int n = 7;
    int not_prime = 0;

    if (n == 0 || n == 1)//WWhich is basically n<2
    {
        printf("%d is NOT prime.\n", n);
    }
    else {
        int i = 2;
        while (i < n) {
        if (n % i == 0 && n != 2) 
            {
                not_prime = 1;
                break;  
            }
            i++;   
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


//For do while loop.

#include <stdio.h>

int main() {
    int n = 8;
    int not_prime = 0;

    if (n == 0 || n == 1)//WWhich is basically n<2
    {
        printf("%d is NOT prime.\n", n);
    }
    else {
        int i = 2;
        do {
        if (n % i == 0 && n != 2) 
            {
                not_prime = 1;
                break;  
            }
            i++;   
        }
        while (i < n);

        if (not_prime) {
            printf("%d is NOT a prime number.\n", n);
        }
        else {
            printf("%d is a prime number.\n", n);
        }
    }
    return 0;