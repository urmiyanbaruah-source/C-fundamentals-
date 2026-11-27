//7. Write a program to calculate the sum of the numbers occurring in the multiplication table of 8 (consider 8 × 1 to 8 × 10). 
 
// #include <stdio.h>

// int main() {

//     int x;
//     int sum = 0;
//     for (int i = 1; i <= 10; i++)
//     {
//         x = 8 * i;
//         sum += x;
//     }
//     printf("The sum of numbers occuring in the multiplication table of 8 is %d\n", sum);
    
//     return 0;
// }

//Harry's version:

//This was a little interesting.

#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += (8 * i);
    }
    printf("The sum of numbers occuring in the multiplication table of 8 is %d\n", sum);
    
    return 0;
}

//So, here he didn't make another unnessary variable. 