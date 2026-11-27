// CHALLENGE 1
//Array palindrome checker/

#include <stdio.h>

int is_palindrome(const int *arr, int size) {
    if(arr == NULL || size <= 0) {
        return -1;
    }

    const int *end = arr + size;
    const int *start_backward = end;

    for(const int *start_forward = arr; start_forward < end; start_forward++) {
        start_backward--;
        if(*start_forward != *start_backward) {
            return 0;
        }
    }
    return 1;
}

void palindrome_checker(int flagger) {
    if(flagger == 1) {
        printf("The array is a palindrome.\n");
    }
    else if (flagger == 0) {
        printf("The array is not a palindrome.\n");
    }
    else {
        printf("Invalid array or size.\n");
    }
}

int main() {
    //Test 1: Odd length Palindrome
    int odd_palindrome[3] = {10, 20, 10};
    int palindrome_tester = is_palindrome(odd_palindrome, 3);

    palindrome_checker(palindrome_tester);

    //Test 2: Even length palindrome/2-element palindrome
    int even_palindrome[2] = {10, 10};
    palindrome_tester = is_palindrome(even_palindrome, 2);

    palindrome_checker(palindrome_tester);

    //Test 3: Non-palindrome
    int non_palindrome[5] = {10, 20, 30, 40, 50};
    palindrome_tester = is_palindrome(non_palindrome, 5);

    palindrome_checker(palindrome_tester);

    //Test 4: 1-element array
    int one_element_palindrome[1] = {10};
    palindrome_tester = is_palindrome(one_element_palindrome, 1);

    palindrome_checker(palindrome_tester);
    
    //Test 5: NULL test
    palindrome_tester = is_palindrome(NULL, 0);

    palindrome_checker(palindrome_tester);
    
    return 0;
}