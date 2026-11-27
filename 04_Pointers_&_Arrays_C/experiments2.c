// #include <stdio.h>

// int main(void) {
//     int a[4] = {10, 20, 30, 40};

//     int *ptr = a;
//     int *ptr2 = a + 1;
//     int (*arrayptr)[4] = &a;
//     int (*arrayptr1)[4] = &a + 1;

//     printf("%p \n%p \n%d \n%d \n%d \n%p \n%p \n%p \n", (void *)ptr, (void *)ptr2, *ptr, *ptr2, **arrayptr, (void *)arrayptr, (void *)arrayptr1, (void *)*arrayptr1);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         if (i == 1) {
//             printf("%d", i);
//         }
//         else {
//             printf(" + %d", i);
//         }
//         sum+=i;
//     }
//     printf(" = %d\n", sum);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n = 4835, count = 0;

//     for (int i = n; i ; i/=10)
//     {
//         count++;
//     }

//     printf("Number of digits in %d is %d\n", n, count);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n = 100, count = 0;
//     if (n == 0) {
//         count = 1;
//     }
//     else {
//         for (int i = n; i; i/=10) {
//             count++;
//         }
//     }
//     printf("The number of digits in %d is %d\n", n, count);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n = 3522, count = 0, reverse = 0;
//     if (n == 0) {
//         count = 1;
//     }
//     else {
//         for (int i = n; i; i /= 10) {
//             count++;
//         }
//     }

//     for (int i = n; i ; i /= 10)
//     {
//         count--;
//         int last_digit = i;
//         last_digit %= 10;
//         int nth_place = last_digit * pow(10, count);
//         reverse += nth_place;
//     }

//     printf("%d\n", reverse);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a[4] = {10, 20, 30, 40};

//     int *ptr = a;
//     int (*arrayptr)[4] = &a;

//     printf("Address of first element of the array: %p\n", (void *)ptr);
//     printf("Value of the first element of the array: %d\n", *ptr);
//     printf("Pointer to the array, which starts at the address of the first elemnt: %p\n", (void *)arrayptr);
//     printf("Printing the array, which undergoes array-to-pointer decay: %p\n", (void *)*arrayptr);

//     printf("\nAddress of the second element: %p\n", (void *)(ptr + 1));
//     printf("Same as a + 1, or even ptr + 1. Points to address of the second element: %p\n", (void *)(*arrayptr + 1));
//     printf("Points to the address of the element one past the array: %p\n", (void *)(arrayptr + 1));
//     printf("\nPrints the third element: %d\n", a[2]);
//     printf("ptr will advance from the 1st position 2 steps forward to the 3rd positin and access the element there: %d\n", ptr[2]);
//     printf("Same as the above. Accesses the element in the third position: %d\n", 2[ptr]);
//     printf("Accesses the first element in the array: %d\n", **arrayptr);

//     printf("\nMemory size of a, which is a 4 integer variable array: %zu\n", sizeof(a));
//     printf("Size of a pointer: %zu\n", sizeof(ptr));
//     printf("Size of a pointer to array, which is still a pointer: %zu\n", sizeof(arrayptr));
//     printf("Size of a, same as the first one: %zu\n", sizeof(*arrayptr));
//     printf("Size of an integer, which is the first element on the array: %zu\n", sizeof(**arrayptr));

//     return 0;
// }

// 1. Memory addresses: Print the addresses of all four elements, ptr, arrayptr, and *arrayptr. Use %p and the appropriate casts.
// 2. Pointer arithmetic: Print ptr + 1, *arrayptr + 1, and arrayptr + 1. Predict how far each moves.
// 3. Array access: Print the values obtained through a[2], ptr[2], 2[ptr], and **arrayptr.
// 4. Memory sizes: Print sizeof(a), sizeof(ptr), sizeof(arrayptr), sizeof(*arrayptr), and sizeof(**arrayptr).




//Pointer of pointer and pointer of pointer of pointer. 


// #include <stdio.h>

// int main()
// {
//     int x = 50;
//     int y = 100;

//     int *p = &x;
//     int **q = &p;
//     int ***r = &q;

//     printf("%d: %u, %u, %u\n", x, p, q, r);

//     p = &y;
//     printf("%d: %u, %u, %u\n", y, p, q, r);

//     return 0;
// }








//Wild, Dangling, NULL, Const:


// NULL
// #include <stdio.h>

// int main() {
//     int ammo = 60, gun = 1;

//     int *ptr1 = &ammo;
//     int *ptr2 = &gun;
//     int *ptr3 = NULL;

//     printf("%p \n", (void *)ptr3);
//     // printf("%d \n", *ptr3);
//     return 0;
// }









//Understanding NULL guards and const int * (Can change the pointer address but not the integer in that Address)

//Find the maximum number in an Array


// #include <stdio.h>

// const int *find_max(const int *arr, int size)
// {
//     if (arr == NULL || size <= 0)
//     {
//         return NULL;
//     }

//     const int *max_ptr = arr;

//     for (int i = 1; i < size; i++)
//     {
//         if (*max_ptr < arr[i])
//         {
//             max_ptr = &arr[i];
//         }
//     }

//     return max_ptr;
// }

// int main()
// {
//     int numbers[5] = {12, 45, 7, 89, 23};
//     const int *biggest = find_max(numbers, 5);

//     if (biggest != NULL)
//     {
//         printf("The biggest number in the array: %d\n", *biggest);
//         printf("The address of the biggest number: %p\n", (void *)biggest);
//     }

//     const int *bad_test = find_max(NULL, 5);
//     if (bad_test == NULL) {
//         printf("NULL guard worked! No crash.\n");
//     }

//     return 0;
// }







//Basically, Cmd + F of an array and updating that value. 

// #include <stdio.h>

// int *locate_target(int *arr, int size, int target)
// {
//     if (arr == NULL || size <= 0)
//     {
//         return NULL;
//     }

//     for (int i = 0; i < size; i++)
//     {
//         if (target == arr[i])
//         {
//             return &arr[i];
//         }
//     }
//     return NULL;
// }

// int main()
// {
//     //First test

//     int array[5] = {10, 25, 40, 55, 70};

//     int *find_target = locate_target(array, 5, 40);

//     if (find_target != NULL)
//     {
//         *find_target = 999;
//         printf("%d\n", array[2]);
//     }

//     else {
//         printf("Target not found!.\n");
//     }

//     //Second test for Invalid attempt

//     find_target = locate_target(array, 5, 13);

//     if (find_target != NULL)
//     {
//         printf("Target found!\n");
//     }

//     else {
//         printf("Target not found!\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int arr[4] = {10, 20, 30, 40};

//     // Loop A
//     int *end = arr + 4;
//     printf("Loop A: ");
//     for (int *p = arr; p < end; p++) {
//         printf("%d ", *p);
//     }
//     printf("\n");

//     // Loop B (Attempting to print in reverse)
//     printf("Loop B: ");
//     for (int *p = arr + 3; p >= arr; p--) {
//         printf("%d ", *p);
//         if (p == arr)
//         {
//             break;
//         }
//     }
//     printf("\n");

//     return 0;
// }







//Learning to use end and start pointers to traverse through an array instead of [i].
//Updating negarive values in an array to 0.

// #include <stdio.h>

// int sanitize_scores(int *arr, int size)
// {
//     if (arr == NULL || size <= 0)
//     {
//         return -1;
//     }

//     int *end = arr + size;
//     int fixed_scores_count = 0;

//     for (int *score_checker = arr; score_checker < end; score_checker++)
//     {
//         if (*score_checker < 0)
//         {
//             *score_checker = 0;
//             fixed_scores_count++;
//         }
//     }

//     return fixed_scores_count;
// }

// int main()
// {
//     int quizz_score[7] = {85, -10, 92, -3, 0, 74, -1};
//     int size_main = 7;

//     int corrected_scores = sanitize_scores(quizz_score, size_main);

//     if (corrected_scores != -1)
//     {
//         printf("%d scores were fixed.\n", corrected_scores);

//         printf("The corrected scores of the student: \n");
//         for (int i = 0; i < size_main; i++)
//         {
//             printf("%d\n", quizz_score[i]);
//         }
//     }

//     else
//     {
//         printf("Invalid Input!\n");
//     }

//     return 0;
// }


