//Write a program to print multiplication table of 10 in reversed order.


#include <stdio.h>

int main() {
    int n, x = 10;

    printf("Enter a number to get the multiplication table of that number in reverse order.\n\n");
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 10; i; i--)
    {
        int x = n * i;
        printf("%d x %d = %d\n", n, i, x);
    }

    printf("The value of x is %d\n", x);
    
    return 0;
}

//Harry's version

// #include <stdio.h>

// int main() {
//     int n = 10;

//     scanf("%d", &n);

//     for (int i = 10; i; i--)
//     {
//         printf("%d x %d = %d\n", n, i, n * i);
//     }
    
//     return 0;
// }

//Nothing too difficult. Again, both of our versions were almost same. And I also initialized x inside the for loop this time. 
