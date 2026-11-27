/*Write a program with three functions:
1. Good morning function which prints "good morning".
2. Good afternoon function which prints "good afternoon".
3. Good night function which prints "good night".
main() should call all of these in order 1→
2→3*/

// #include <stdio.h>
// void GoodMorning () {
//     printf("Good morning!\n");
// }

// void GoodAfternoon () {
//     printf("Good Afternoon!\n");
// }

// void GoodNight () {
//     printf("Good Night!\n");
// }
// int main() {
//     GoodMorning();
//     GoodAfternoon();
//     GoodNight();
//     return 0;
// }

// Quizz 2

// Use the library function to calculate the area of a square with side a.
//Hint: Use pow(a, 2) from <math.h> to calculate a²
//Formula: Area of square = side × side = a²

// #include <stdio.h>
// #include <math.h>

// int squareArea(int a) {
//     return pow(a, 2);
// } 
// int main() {
//     int s;
//     printf("Enter the length of side of a square to get its area in cm.\n");
//     printf("Input: ");
//     scanf("%d", &s);

//     printf("Area of the square of side %d cm is %d cm\n", s, squareArea(s));

//     return 0;
// }

//Harry's version:

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int a = 5;
//     printf("Area of the square of side %d cm is %f cm²\n", a, pow(a, 2));
//     return 0;
// }

//This doesn't work since pow() returns a double, so we change %d to %f. 

#include <stdio.h>
#include <math.h>

int main() {
    int a = 5;
    printf("Area of the square of side %d cm is %f cm²\n", a, pow(a, 2));
    return 0;
}
