/*Again, for the practice sheet, I did most of them myself myself first, except the 6th one.*/


/*2. Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user.*/

#include <stdio.h>

int main() {
    float physics, maths, chemistry, sum;

    printf("Enter your physics marks: ");
    scanf("%f", &physics);

    printf("Enter your maths marks: ");
    scanf("%f", &maths);

    printf("Enter your chemistry marks: ");
    scanf("%f", &chemistry);

    sum = physics + maths + chemistry;

    printf("Your total marks is : %f\n", sum);
    

    if (sum >= (40.0/100.0)*300.0 && physics >= (33.0/100.0)*100.0 && maths >= (33.0/100.0)*100.0 && chemistry >= (33.0/100.0)*100.0) {
        
        printf("Congratulations! You have passed.\n");
    }

    else {
        printf("You have failed.\n");
    }
    return 0;
}

    // Here, I wrote "if (sum >= (40/100)*300 && physics >= (33/100)*100 && maths >= (33/100)*100 && chemistry >= (33/100)*100) " and god, I was going crazy...after a long, long time, I figured out that I should turn it to float. God...this was so frustrating. From this, I learned that while dealing with large fractions, divisions, percentages, I should always use float and shouldn't forget to add the decimal at the end.



//Harry's version...I guess he was being more particular about it.
#include <stdio.h>

int main() {
    int mark1, mark2, mark3;

    printf("Enter marks1: ");
    scanf("%d", &mark1);

    printf("Enter marks2: ");
    scanf("%d", &mark2);

    printf("Enter marks3: ");
    scanf("%d", &mark3);

    printf("The marks are %d, %d, and %d", mark1, mark2, mark3);

    if (mark1 < 33 || mark2 < 33 || mark3 < 33) {
        printf("You have failed due to insufficient marks in an individual subject\n");
    }

    else if ((mark1 + mark2 + mark3)/3 < 40) {
        printf("You have failed due to insufficient percentage.\n");
        //I didn't know that the avg can also used as pernetage?? Do tell me about it. 
    }

    else {
        printf("You have passed!");
    }
    return 0;
}

