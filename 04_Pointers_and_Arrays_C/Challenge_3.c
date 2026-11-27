//CHALLENGE 3
//Smallest and largest element in an array.

#include <stdio.h>

int find_min_max(const int *arr, int size, int *min_out, int *max_out) {
    if(arr == NULL || size <= 0 || min_out == NULL || max_out == NULL) {
        return -1;
        
    }
    const int *end = arr + size;
    *min_out = *arr; 
    *max_out = *arr;

    for(const int *min_max_search = arr + 1; min_max_search < end; min_max_search++) {
        if(*min_out > *min_max_search) {
            *min_out = *min_max_search;
        }
        else if(*max_out < *min_max_search) {
            *max_out = *min_max_search;
        }
    }

    return 0;
} 

void min_max_printer(int flagger ,int min, int max) {
    if(flagger != -1) {
        printf("Smallest element in array: %d\n", min);
        printf("Largest element in array: %d\n", max);
    }
    else {
        printf("Invalid input.\n");
    }
    printf("\n");
}

int main() {
    //Test 1: Mixed array
    int mixed_arr[5] = {5, 6, -9, 0, 23};
    int min_element = 0, max_element = 0;
    
    int min_max_success_checker = find_min_max(mixed_arr, 5, &min_element ,&max_element);
    min_max_printer(min_max_success_checker, min_element, max_element);

    //Test 2: All negative array
    int negative_arr[5] = {-5, -2, -11, -34, -3};

    min_max_success_checker = find_min_max(negative_arr, 5, &min_element, &max_element);
    min_max_printer(min_max_success_checker, min_element, max_element);

    //Test 3: 1-elment array
    int one_element_arr[1] = {4};

    min_max_success_checker = find_min_max(one_element_arr, 1, &min_element, &max_element);
    min_max_printer(min_max_success_checker, min_element, max_element);

    //Test 4: Testing for each false parameter.

    //First one
    min_max_success_checker = find_min_max(NULL, 5, &min_element, &max_element);
    min_max_printer(min_max_success_checker, min_element, max_element);

    //Second one
    min_max_success_checker = find_min_max(one_element_arr, 0, &min_element, &max_element);
    min_max_printer(min_max_success_checker, min_element, max_element);

    //Third one
    min_max_success_checker = find_min_max(one_element_arr, 1, NULL, &max_element);
    min_max_printer(min_max_success_checker, min_element, max_element);
    
    //Last one
    min_max_success_checker = find_min_max(one_element_arr, 1, &min_element, NULL);
    min_max_printer(min_max_success_checker, min_element, max_element);

    return 0;
} 