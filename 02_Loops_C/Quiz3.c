/*Write a program to print first 'n' natural numbers using for loop*/

#include <stdio.h>

int main() {
    int n;

    printf("Input: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
//Nothing too complex here, and I think I've got the basic intuition down here. Still, I think a mental model will be really important here. More than even while loop probabably.

//Harry's veriosn:

#include <stdio.h>

int main() {
    int n = 10;

    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
    
    return 0;
}

//Almost identical to my one, just using hard coded values.

/*Here's my thoughts on for loops currently-
1. I think it's important to note that the produced value of i++ IS BEING USED here and not thrown away. I hope this right, because at first glance, it does look like the produced value is being thrown away since, we're writing printf("%d", i); instead of printf("%d", i++);

2. I think the metal model here involves two different factories. The first one is basically a manufacturing, screening and operating factory with 3 sectors, and this is where the main stuff happens. The second one is just a display factory.

First factory-

    i. First sector: i is initialised inside this sector and sent to the second sector.
    ii. Second sector: i is interrogated by the condition guard here. This sector determimes whether i enters the 2nd factory or not(screening).
    iii. Third sector: Here, assuming the condition guard allowed the control/conveyor belt to continue, i is given it's reciept by i++ with the old value(produced value). After this, i is finally allowed to enter the second factory.

Seconday factory-

    i. i is displayed with it's old value reciept.
    ii. After being displayed, i recieves its new/incremented value.

After first iteration.-

    i. The control/conveyor belt sends i back to 1st factory and to the first sector.
    ii. Since i is already was initialised in the first iteration, i just directly goes to the second sector and the loop continues.
    iii. i eventually gets a value which the condition guard rejects for a giving a 0/false value and the loop terminates.
*/