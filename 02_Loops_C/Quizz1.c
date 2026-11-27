 //Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0.   

// #include <stdio.h>

// int main() {
//     int i = 0;

//     while (i>=10 && i<=20) {
//         printf("The value of i is %d\n", i);
//         i++;

//     }
//     return 0;
// }

//It seemed similar to if-else statements so I tried this, and it didn't work😭. I checked Harry's version and this is what he did.

#include <stdio.h>

int main() {
    int i = 0;

    while (i<=20) {
        if (i>=10) {
            printf("The value of i is %d\n", i);
        }
        i++;
    }
    return 0;
}

/*Here, i is declared with a value of 0.
A while loop is initiated with the condition set for i to print untill it is less or equal to 20. Inside this, there is a nested if(?) that is set to execute the block when we ask i if it is greater or equal to 10 and it produces 1/true. This while and if condition makes a range of 10 to 20, accepting incrementing values of i(using the post increment operator? I'm guessing the post increment operator is used the most often?). After i reaches 20, the loop terminates.*/