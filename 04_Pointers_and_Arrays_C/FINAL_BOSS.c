//FINAL BOSS(2-pointer DSA question)
//Reversing an array.


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