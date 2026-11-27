// CHALLENGE 2
//Printing even elements of an array.

#include <stdio.h>

int copy_evens(const int *src, int *dest, int size) {
    if(src == NULL || dest == NULL || size <= 0) {
        return -1;
    }

    const int *end = src + size;
    int even_counter = 0;

    for(const int *start_left = src; start_left < end; start_left++) {
        if(*start_left % 2 == 0) {
            *dest = *start_left;

            even_counter++;
            dest++;
        }
    }

    return even_counter;
}

void even_array_printer(int even_elements, const int *even_array) {

    if (even_elements != -1)
    {
        printf("Even elements: ");
        for (int i = 0; i < even_elements; i++)
        {
            printf("%d ", even_array[i]);
        }
        printf("\n");
    }
    else {
        printf("Invalid input case.\n");
    }
}

int main() {
    //Test 1: Mixed array
    int mixed_arr[5] = {2, 4, -6, 0, -7};
    int even_array1[5];
    
    int even_elements1 = copy_evens(mixed_arr, even_array1, 5);
    even_array_printer(even_elements1, even_array1);

    //Test 2: No-even_number array
    int no_even_array[5] = {3, 5, 7, 9, -7};
    int even_array2[5];

    int even_elements2 = copy_evens(no_even_array, even_array2, 5);
    even_array_printer(even_elements2, even_array2);

    //Test 3: Invalid case
    int even_array3[3];
    int even_elements3 = copy_evens(NULL, NULL, 0);

    even_array_printer(even_elements3, even_array3);

    return 0;
}