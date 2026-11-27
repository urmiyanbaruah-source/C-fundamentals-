/*. Write a program using recursion to calculate nth element of Fibonacci series*/

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) {     //Just one base case now 👍
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);     //recursive case and calculation.
} 
int main() {
    int n;
    printf("Enter a number 'n' to calculate the nth element of the Fibonacci series.\n");
    printf("Input: ");
    scanf("%d", &n);

    printf("The %dth element of the Fibonacci series is %d\n", n, fibonacci(n));
    return 0;
}

//I tried mentally doing the whole tree/branch dry run for fibonacci(5) and I was able to do it with some effort. But, I think that's progress.

// //Harry's version:

// #include <stdio.h>

// int fibonacci(int n) {
//     if (n == 1 || n == 2) {  //base case
//         return n - 1;
//     }

//     return fibonacci(n - 1) + fibonacci(n - 2);     //recursive case and calculation.
// } 
// int main() {
//     int n = 6;

//     printf("The %dth element of the Fibonacci series is %d\n", n, fibonacci(n));
//     return 0;
// }