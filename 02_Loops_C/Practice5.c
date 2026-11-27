// #include <stdio.h>

// int main() {
//     int i = 1;
//     int x = 0;

//     printf("%d ", i);

//     while (i <= 10)
//     {
//         x += i;
//         printf("+ %d ", i);
//         i++; //I see now...putting i++ at the end sort of replicates a for loop. This while loop is basically acting as a for loop now. With my current hypothesis, this should be the correct answer. 
//     }
//     printf("= %d\n", x);

//     return 0;
// }

//I ran into another problem...now, it's showing 1 + 1 + 2....+10 = 55. What I could do is cut the printf("%d", i); before the loop, but it would still show as + 1 + 2 +3...which doesn't make sense. Another way is to bring the i++ back to the beginning of the loop and write the condition as i<= 9 instead. 

//Harry's version: 


// #include <stdio.h>

// int main() {
//     int i = 1;
//     int sum = 0;

//     while (i <= 10)
//     {
//         sum += i;
//         i++;  

//     }
//     printf("The sum of the first 10 natural numbers is %d\n", sum);

//     return 0;
// }

//Just as you said, he didn't do the 1 + 2 +...thing and just directly wrote the program this way. 


//Another way...

#include <stdio.h>

int main() {
    int i = 1;
    int x = 1;

    printf("%d ", i);

    while (i < 10)
    {
        i++; 
        x += i;
        printf("+ %d ", i);
    }
    printf("= %d\n", x);

    return 0;
}