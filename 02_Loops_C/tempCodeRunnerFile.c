//Harry's version:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    int actual_number = (rand() % 100) + 1;
    int no_of_guesses;
    int guessed_number;
    
    do //I think this is a good use of do while loop, but it could definitely be done with any other loop.
    {
        printf("Guess the number: ");
        scanf("%d", &guessed_number);
        if (guessed_number < actual_number) {
            printf("Guess higher please.");
        }
        else if (guessed_number > actual_number) {
            printf("Guess lower please");
        }
        else {
            printf("Congrats!");
        }
        no_of_guesses++;
    } while (guessed_number != actual_number); //I get why he did this...is this what you wanted me to add in the for loops condition?
    
    printf("You guess the number in %d guesses", no_of_guesses);
    return 0;
}
