/*
7. Write a program using function to print the following pattern (first n lines):
*
***
*****

*/

#include <stdio.h>

void print_odd_asterisk(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*i+1; j++)     //This loop basically prints * odd number of times, or 2*i+1 times.
        {
            printf("*");
        }
        printf("\n");   //Adds a line in between.
    }
}
int main() {
    int n;
    printf("Input: ");
    scanf("%d", &n);
    print_odd_asterisk(n);
    return 0;
}

//Harry's version

// #include <stdio.h>

// int main() {
//     int n = 3;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 2*i+1; j++)     //This loop basically prints * odd number of times, or 2*i+1 times.
//         {
//             printf("*");
//         }
//         printf("\n");   //Adds a line in between.
        
//     }
    
//     return 0;
// }