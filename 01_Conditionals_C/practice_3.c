/*3. Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab Tax
2.5 - 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/

// #include <stdio.h>

// int main() {
//     float income, tax_perc, tax_amt;

//     printf("Enter your income : ");
//     scanf("%f", &income);

//     if (income > 1000000) {
//         tax_perc = 30.0;
//         printf("Your income tax is %.2f percent of your annual income.\n", tax_perc);
//         tax_amt = (tax_perc/100)*income;
//         printf("Thus, your tax amount is : %.2f\n", tax_amt);
//     }

//     else if (income >= 500000 && income <= 1000000) {
//         tax_perc = 20.0;
//         printf("Your income tax is %.2f percent of your annual income.\n", tax_perc);
//         tax_amt = (tax_perc/100)*income;
//         printf("Thus, your tax amount is : %.2f.\n", tax_amt);
//     }

//     else if (income >= 250000 && income < 500000) {
//         tax_perc = 5.0;
//         printf("Your income tax is %.2f percent of your annual income.\n", tax_perc);
//         tax_amt = (tax_perc/100)*income;
//         printf("Thus, your tax amount is : %.2f.\n", tax_amt);
//     }

//     else {
//         tax_perc = 00.0;
//         printf("Your income tax is %.1f percent of your annual income.\n", tax_perc);
//         printf("You are not required to pay any income tax.\n");
//     }
//     return 0;
// }


//Harry's version...my one was way off. I didn't know there was a specific way to calculate income tax like that.

#include <stdio.h>

int main() {
    int income;
    float tax = 0;

    printf("Enter your income: ");
    scanf("%d", &income);

    if (income < 250000) {
        tax = 0;
    }

    else if (income >= 250000 && income < 500000) {
        tax = 0.05 * (income - 250000);
    }

    else if (income >= 500000 && income < 1000000) {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
    }

    else {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }
    printf("Total tax you are required to pay: %.2f\n", tax);
    return 0;
}