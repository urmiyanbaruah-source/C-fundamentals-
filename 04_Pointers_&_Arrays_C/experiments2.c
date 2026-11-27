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


//CHALLENGE 1

// #include <stdio.h>

// int is_palindrome(const int *arr, int size) {
//     if(arr == NULL || size <= 0) {
//         return -1;
//     }

//     const int *end = arr + size;
//     const int *start_backward = end;

//     for(const int *start_forward = arr; start_forward < end; start_forward++) {
//         start_backward--;
//         if(*start_forward != *start_backward) {
//             return 0;
//         }
//     }
//     return 1;
// }

// void palindrome_checker(int flagger) {
//     if(flagger == 1) {
//         printf("The array is a palindrome.\n");
//     }
//     else if (flagger == 0) {
//         printf("The array is not a palindrome.\n");
//     }
//     else {
//         printf("Invalid array or size.\n");
//     }
// }

// int main() {
//     //Test 1: Odd length Palindrome
//     int odd_palindrome[3] = {10, 20, 10};
//     int palindrome_tester = is_palindrome(odd_palindrome, 3);

//     palindrome_checker(palindrome_tester);

//     //Test 2: Even length palindrome/2-element palindrome
//     int even_palindrome[2] = {10, 10};
//     palindrome_tester = is_palindrome(even_palindrome, 2);

//     palindrome_checker(palindrome_tester);

//     //Test 3: Non-palindrome
//     int non_palindrome[5] = {10, 20, 30, 40, 50};
//     palindrome_tester = is_palindrome(non_palindrome, 5);

//     palindrome_checker(palindrome_tester);

//     //Test 4: 1-element array
//     int one_element_palindrome[1] = {10};
//     palindrome_tester = is_palindrome(one_element_palindrome, 1);

//     palindrome_checker(palindrome_tester);
    
//     //Test 5: NULL test
//     palindrome_tester = is_palindrome(NULL, 0);

//     palindrome_checker(palindrome_tester);
    
//     return 0;
// }

//CHALLENGE 2

// #include <stdio.h>

// int copy_evens(const int *src, int *dest, int size) {
//     if(src == NULL || dest == NULL || size <= 0) {
//         return -1;
//     }

//     const int *end = src + size;
//     int even_counter = 0;

//     for(const int *start_left = src; start_left < end; start_left++) {
//         if(*start_left % 2 == 0) {
//             *dest = *start_left;

//             even_counter++;
//             dest++;
//         }
//     }

//     return even_counter;
// }

// void even_array_printer(int even_elements, const int *even_array) {

//     if (even_elements != -1)
//     {
//         printf("Even elements: ");
//         for (int i = 0; i < even_elements; i++)
//         {
//             printf("%d ", even_array[i]);
//         }
//         printf("\n");
//     }
//     else {
//         printf("Invalid input case.\n");
//     }
// }

// int main() {
//     //Test 1: Mixed array
//     int mixed_arr[5] = {2, 4, -6, 0, -7};
//     int even_array1[5];
    
//     int even_elements1 = copy_evens(mixed_arr, even_array1, 5);
//     even_array_printer(even_elements1, even_array1);

//     //Test 2: No-even_number array
//     int no_even_array[5] = {3, 5, 7, 9, -7};
//     int even_array2[5];

//     int even_elements2 = copy_evens(no_even_array, even_array2, 5);
//     even_array_printer(even_elements2, even_array2);

//     //Test 3: Invalid case
//     int even_array3[3];
//     int even_elements3 = copy_evens(NULL, NULL, 0);

//     even_array_printer(even_elements3, even_array3);

//     return 0;
// }

// CHALLENGE 3

// #include <stdio.h>

// int find_min_max(const int *arr, int size, int *min_out, int *max_out) {
//     if(arr == NULL || size <= 0 || min_out == NULL || max_out == NULL) {
//         return -1;
        
//     }
//     const int *end = arr + size;
//     *min_out = *arr; 
//     *max_out = *arr;

//     for(const int *min_max_search = arr + 1; min_max_search < end; min_max_search++) {
//         if(*min_out > *min_max_search) {
//             *min_out = *min_max_search;
//         }
//         else if(*max_out < *min_max_search) {
//             *max_out = *min_max_search;
//         }
//     }

//     return 0;
// } 

// void min_max_printer(int flagger ,int min, int max) {
//     if(flagger != -1) {
//         printf("Smallest element in array: %d\n", min);
//         printf("Largest element in array: %d\n", max);
//     }
//     else {
//         printf("Invalid input.\n");
//     }
//     printf("\n");
// }

// int main() {
//     //Test 1: Mixed array
//     int mixed_arr[5] = {5, 6, -9, 0, 23};
//     int min_element = 0, max_element = 0;
    
//     int min_max_success_checker = find_min_max(mixed_arr, 5, &min_element ,&max_element);
//     min_max_printer(min_max_success_checker, min_element, max_element);

//     //Test 2: All negative array
//     int negative_arr[5] = {-5, -2, -11, -34, -3};

//     min_max_success_checker = find_min_max(negative_arr, 5, &min_element, &max_element);
//     min_max_printer(min_max_success_checker, min_element, max_element);

//     //Test 3: 1-elment array
//     int one_element_arr[1] = {4};

//     min_max_success_checker = find_min_max(one_element_arr, 1, &min_element, &max_element);
//     min_max_printer(min_max_success_checker, min_element, max_element);

//     //Test 4: Testing for each false parameter.

//     //First one
//     min_max_success_checker = find_min_max(NULL, 5, &min_element, &max_element);
//     min_max_printer(min_max_success_checker, min_element, max_element);

//     //Second one
//     min_max_success_checker = find_min_max(one_element_arr, 0, &min_element, &max_element);
//     min_max_printer(min_max_success_checker, min_element, max_element);

//     //Third one
//     min_max_success_checker = find_min_max(one_element_arr, 1, NULL, &max_element);
//     min_max_printer(min_max_success_checker, min_element, max_element);
    
//     //Last one
//     min_max_success_checker = find_min_max(one_element_arr, 1, &min_element, NULL);
//     min_max_printer(min_max_success_checker, min_element, max_element);

//     return 0;
// } 

//FINAL BOSS

#include <stdio.h>

void swap_ints(int *a, int *b);

int reverse_array(int *arr, int size);

void before_after_array_printer(int *arr, int size);

int main() {
    //Test 1: Odd-length array
    int odd_array[5] = {10, 22, 44, 37, 10};
    before_after_array_printer(odd_array, 5);

    //Test 2: Even-length array
    int even_array[6] = {2, 9, 79, 0, -8, 3};
    before_after_array_printer(even_array, 6);

    //Test 3: One-element array
    int one_array[1] = {5};
    before_after_array_printer(one_array, 1);

    //Test 4: Isolated invalid tests:
    before_after_array_printer(NULL, 5);

    before_after_array_printer(even_array, 0);
    return 0;
}

void swap_ints(int *a, int *b) {
    if(a == NULL || b == NULL) {
        return;
    }

    int temp = *a;
    *a = *b;
    *b = temp;
}

int reverse_array(int *arr, int size) {
    if(arr == NULL || size <= 0) {
        return -1;
    }

    int *end = arr + size;
    int *right = end;

    for(int *left = arr; left < end; left++) {
        right--;
        if(left >= right) {
            return 0;
        }
        if(*left != *right) {
            swap_ints(left, right);
        }
        
    }

    return 0;  //This is apparantly needed? I think the for loop is guaranteed to encounter the return 0; case...do non-void funcs just need them at the end?
}

void before_after_array_printer(int *arr, int size) {
    if (arr == NULL || size <= 0) {
        printf("Invalid input.\n");
        return;
    }
    printf("Array before: ");
    int *end = arr + size;
    for (int *b_printer = arr; b_printer < end; b_printer++)
    {
        printf("%d ", *b_printer);
    }
    printf("\n");
    int valid_array_checker = reverse_array(arr, size);

    if(valid_array_checker != -1) {
        printf("Array after: ");
        for(int *a_printer = arr; a_printer < end; a_printer++) {
            printf("%d ", *a_printer);
        }
    }
    else {
        printf("Invalid input.\n");
    }
    printf("\n\n");
}