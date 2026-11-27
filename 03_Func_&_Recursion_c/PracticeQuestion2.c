/*2. Write a function to convert Celsius temperature into Fahrenheit.*/

// #include <stdio.h>

// float celsiusToFahrenheit (int c) {
//     return (c * 9.0/5.0) + 32.0;
// }
// int main() {
//     int n;
//     printf("Enter a number in celsius to find its value in Fahrenheit\n");
//     printf("Input: ");
//     scanf("%d", &n);

//     printf("%d in fahrenheit is %f\n", n, celsiusToFahrenheit(n));
//     return 0;
// }

//Harry's version

#include <stdio.h>

float c2f (float c) {
    return ((c*9)/5) + 32;
}
int main() {
    float c = 38;
    printf("Value of %.2f in Fahrenheit is %.2f\n", c, c2f(c));
    return 0;
}