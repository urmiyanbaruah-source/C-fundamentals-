/*3. Write a function to calculate force of attraction on a body of mass 'm' exerted by
earth. Consider g = 9.8m/s² */

// #include <stdio.h>

// float weight (float m) {
//     return m * 9.8;
// }
// int main() {
//     float n;
//     printf("Find the force of attraction on a body of mass 'm' exerted by earth.\n");
//     printf("Input m: ");
//     scanf("%f", &n);

//     printf("The force exerted by earth on the body is %.2f N\n", weight(n));
//     return 0;
// }

//Harry's version

#include <stdio.h>

float force (float mass) {
    return mass * 9.8;
}
int main() {
    int n = 45;
    printf("The force is %f\n", force(n));
    return 0;
}