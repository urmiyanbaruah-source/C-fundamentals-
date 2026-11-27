//make a power/exponent function

//First prototype:

// #include <stdio.h>

// int power(int base, int exponent) {
//     if (exponent == 1) {
//         return base;
//     }
    
//     return base * power(base, exponent - 1);
// }
// int main() {
//     printf("%d\n", power(3, 0));
//     return 0;
// }

//Second prototype:

// #include <stdio.h>

// int power(int base, int exponent) {
//     if (exponent == 0) {
//         return 1;
//     }
//     if (exponent == 1) {
//         return base;
//     }
//     return base * power(base, exponent - 1);
// }
// int main() {
//     printf("%d\n", power(3, 0));
//     return 0;
// }

//Final prototype:

// #include <stdio.h>

// int power(int base, int exponent) {
//     if (exponent == 0) {
//         return 1;
//     }
//     return base * power(base, exponent - 1);
// }
// int main() {
//     printf("%d\n", power(3,0));
//     return 0;
// }w

#include <stdio.h>

int digitSum(int n) {
    if (n < 10) {
        return n;
    }
    return digitSum(n / 10) + (n % 10);
}
int main() {
    printf("%d\n", digitSum(1234));
    return 0;
}