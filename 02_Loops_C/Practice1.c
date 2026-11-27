/*1. Write a program to print multiplication table of a given number n .*/

#include <stdio.h>

int main() {
    int n, x;
    printf("Get multiplication table of any number.\n");
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        x = n * i;
        printf("%d * %d = %d\n", n, i, x);
    }
    
    return 0;
}

//Harry's version

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d X %d = %d\n", n, i, n*i);
//     }
    
//     return 0;
// }


//I actually prefer my own version compared to Harry's version. Is that okay? Harry's a silver medalist from IIT Kharagpur so you bet I kinda wanna like what he likes 😭. Still, like my version better here, what about you?

