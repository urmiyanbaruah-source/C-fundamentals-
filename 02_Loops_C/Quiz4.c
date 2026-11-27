/*Quick Quiz: Write a program to print 'n' natural numbers in reverse order.*/

// #include <stdio.h>

// int main() {
//     int n;

//     printf("Input: ");
//     scanf("%d", &n);

//     for (int i = n; i; i--)  //By the example shown by harry for decrementing loops, what I understand of this is actually (int i=n; i != 0; i--);.
//     {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }

//Harry's version:

#include <stdio.h>

int main() {
    int n = 12;

    for (int i = n; i; i--)  
    {
        printf("%d\n", i);
    }
    
    return 0;
}

//Again, not that different, just hard coded. 

/*Here's the dry run:  
n is initialized for input.
for:

sector 1: i is initialised such that the value of n is assigned to it.
sector 2: i is interrogated by the guard. If i is any non-zero number, the guard approves and sends the control over to the second factory/body.
Second factory/body: Displays i with the same value n. The control is then sent to the third sector.
Sector 3: i-- decrements i of value n. Produced value is thrown away and the control sends i with the new value over to sector 2 again for interrogation.
After this, the loop continues between the condition → body → decrement, and back to condition. This continues until i has zero as its value. Once i is zero, control exits the loop(is that the right terminology?).

Simplified version is this:
i is initialised to take n → condition/guard asks i if it is non-zero. If yes, control goes to body → Body displayes i → control then goes decrement operator. i-- decrements i and produced value is thrown away. Conrol is then passed back to condition/guard, and the loop continues without the initialising sector.
*/ 