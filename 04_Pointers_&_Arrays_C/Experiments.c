// #include <stdio.h>

// int main()
// {
//     int x = 50;
//     int y = 100;

//     int *p = &x;
//     int **q = &p;
//     int ***r = &q;

//     printf("%d: %u, %u, %u\n", x, p, q, r);

//     p = &y;
//     printf("%d: %u, %u, %u\n", y, p, q, r);

//     return 0;
// }


#include <stdio.h>

int main() {
    int radius, height;

    printf("Enter the radius of the cylinder: ");
    scanf("%d", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%d", &height);

    printf("\n--- Results ---\n");
    printf("Total Surface Area  = %f\n", 2 * 3.14 * radius * (radius + height));

    return 0;
}