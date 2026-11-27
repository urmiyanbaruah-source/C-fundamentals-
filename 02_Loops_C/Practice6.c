//6. Write a program to implement program 5 using for and do-while loop.

//a) Using for loop

// #include <stdio.h>

// int main() {
//     int sum = 0;  //This is where I would declare sum outside the loop so I can use it outside the loop at end.

//     for (int i = 1; i <= 10; i++)
//     {
//         sum += i;
//     }
//     printf("The sum of the first 10 natural numbers are %d\n", sum);
       
//     return 0;
// }

//Wow...for loop was really easy. 

//b)Using do while loop:

#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;

    do
    {
        sum += i;
        i++;
    } while (i <= 10);
    printf("The sum of first 10 natural numbers is %d\n", sum);
    return 0;
}

//Also pretty easy, but I still think for loop was the easiest. 