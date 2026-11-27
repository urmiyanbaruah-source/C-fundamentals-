/*Write a program to print first 'n' natural number using do-while loop.*/

#include <stdio.h>

int main() {
    int n, i=1;

    printf("Input: ");
    scanf("%d", &n);

    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=n);
    
    printf("%d\n", i);
    return 0;
    
}

//That commented part was just to check whether I was correct or not. It does get a little tricky if you don't dry run the full loop in your head first. I made a few mistakes here in that I thought first that (i<=n) should be perfect, but then again I overcomplicated things and then thought "Hmm...maybe i<n should work here instead", but no. I then had to check the final value again in that comment that you can see. I then dry ran the whole thing in my brain slowly this time and just had a big face palm moment. I do this a lot actually, where I actually do the right thing, but then overthink and make it wrong again. I've been doing this my whole life in exams as well.

//Harry's version:

// #include <stdio.h>

// int main() {
//     int n, i=1;

//     scanf("%d", &n);

//     do
//     {
//         printf("%d\n", i);
//     } while (i<=n);
    
//     return 0;
// }

//Probably the only program that's exactly same as harry's version. It was easy I guess.

//I also think do-while isn't as important as while and for. I know for is definitely the most important though. Could you rank them on basis of importance? Also tell me how much time I should spend on do-while...asking this because Harry spent very little on do while. Almost half of the chapter length is left and he uses half of the whole chapter lenth for 'for loops'.