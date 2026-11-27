/*Number Guessing Game
In this project, we will build a simple Number Guessing Game using loops, conditional statements,
and a random number generator.
The program generates a random number and asks the player to guess it.
If the player's guess is greater than the actual number, the program should display:
Lower number please
Similarly, if the user's guess is smaller than the actual number, the program should display:
Higher number please
The game should continue until the player guesses the correct number.
Once the correct number is guessed, the program should display the total number of guesses taken by
the player.
Hint
Use a loop along with a random number
generator to repeatedly compare the user's
guess with the actual number.*/



//Prototype 1: Available attempts to all possible answers.

// #include <stdio.h>

// int main() {
//     int actual_number = 65, guessed_number, i;
//     printf("Guess the number: ");
//     scanf("%d", &guessed_number);

//     for ( i = 1; i <=100; i++)
//     {
//         if (guessed_number < actual_number) {
//             printf("Guess higher please.\n");   
//             scanf("%d", &guessed_number);         
//         }
//         else if (guessed_number > actual_number) {
//             printf("Guess lower please.\n");
//             scanf("%d", &guessed_number);
//         }
//         else {
//             printf("Congratulations! You guessed the number %d\nin %d attempts.\n", actual_number, i);
//             break;
//         }
//     }
    
//     return 0;
// }

//Prototype 2: Infinite attempts

// #include <stdio.h>

// int main() {
//     int actual_number = 65, guessed_number, i;
//     printf("Guess the number: ");
//     scanf("%d", &guessed_number);

//     for ( i = 1; i; i++)  
//     {
//         if (guessed_number < actual_number) {
//             printf("Guess higher please.\n");   
//             scanf("%d", &guessed_number);         
//         }
//         else if (guessed_number > actual_number) {
//             printf("Guess lower please.\n");
//             scanf("%d", &guessed_number);
//         }
//         else {
//             printf("Congratulations! You guessed the number %d\nin %d attempts.\n", actual_number, i);
//             break;
//         }
//     }
    
//     return 0;
// }

//Prototype 3: With limited attempts/lives.

// #include <stdio.h>

// int main() {
//     int actual_number = 65, guessed_number, i, lives = 4;
//     printf("Number guessing game\n\n");
//     printf("=== You have 4 lives ===\n\n");
//     printf("Guess the number: ");
//     scanf("%d", &guessed_number);

//     for ( i = 1; i <= 4; i++)
//     {
//         if (guessed_number < actual_number) {
//             lives--;
//             if (lives == 0) {
//                 break;
//             }
//             printf("You lost a life!\n");
//             printf("Lives Remaining: %d\n", lives);
//             printf("Guess higher please.\n");   
//             scanf("%d", &guessed_number);         
//         }
//         else if (guessed_number > actual_number) {
//             lives--;
//             if (lives == 0) {
//                 break;
//             }
//             printf("You lost a life!\n");
//             printf("Lives Remaining: %d\n", lives);
//             printf("Guess lower please.\n");
//             scanf("%d", &guessed_number);
//         }
        
//         else {
//             printf("Congratulations! You guessed the number %d\nin %d attempts.\nLives remaining: %d\n", actual_number, i, lives);
//             break;
//         }
//     }

//     if (lives == 0)
//     {
//         printf("DEFEAT! All 4 lives lost...\nBetter luck next time.\n");
//         printf("Stats:\n Lives remaining: %d\n Attempts: %d\n", lives, i);
//     }
    
//     return 0;
// }

//Prototype 4: 3 but with flagging.  

// #include <stdio.h>

// int main() {
//     int actual_number = 65, guessed_number, i, lives = 4, won = 0;
//     printf("Number guessing game\n\n");
//     printf("=== You have 4 lives ===\n\n");
//     printf("Guess the number: ");
//     scanf("%d", &guessed_number);

//     for ( i = 1; i <= 4; i++)
//     {
//         if (guessed_number < actual_number) {
//             lives--;
//             if (lives == 0) {
//                 break;
//             }
//             printf("You lost a life!\n");
//             printf("Lives Remaining: %d\n", lives);
//             printf("Guess higher please.\n");   
//             scanf("%d", &guessed_number);         
//         }
//         else if (guessed_number > actual_number) {
//             lives--;
//             if (lives == 0) {
//                 break;
//             }
//             printf("You lost a life!\n");
//             printf("Lives Remaining: %d\n", lives);
//             printf("Guess lower please.\n");
//             scanf("%d", &guessed_number);
//         }
        
//         else {
//             won = 1;
//             break;
//         }
//     }

//     if (won && lives)
//     {
//         printf("\nCongratulations! You guessed the number %d\nin %d attempts.\n\nStats:\n\nLives remaining: %d\nAttempts: %d\n", actual_number, i, lives, i);
//     }
//     else {
//         printf("DEFEAT! All 4 lives lost...\nBetter luck next time.\n");
//         printf("Stats:\nLives remaining: %d\nAttempts: %d\n", lives, i);
//     }
//     return 0;
// }


//Final prototype: With the RNG generator.

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {

//     srand(time(NULL));
//     int actual_number = (rand() % 100) + 1;
//     int guessed_number;
//     int i;
//     int lives = 4;
//     int won = 0;

//     printf("=== NUMBER GUESSING GAME ===\n\n");
//     printf("=== You have 4 lives ===\n\n");
//     printf("I have generated a number between 1 and 100.\nCan you guess it?\n\n");
//     printf("Enter your guess: ");
//     scanf("%d", &guessed_number);

//     for ( i = 1; i <= 4; i++)
//     {
//         if (guessed_number < actual_number) {
//             lives--;
//             if (lives == 0) {
//                 break;
//             }
//             printf("You lost a life!\n");
//             printf("Lives Remaining: %d\n", lives);
//             printf("Guess higher please.\n");   
//             scanf("%d", &guessed_number);         
//         }
//         else if (guessed_number > actual_number) {
//             lives--;
//             if (lives == 0) {
//                 break;
//             }
//             printf("You lost a life!\n");
//             printf("Lives Remaining: %d\n", lives);
//             printf("Guess lower please.\n");
//             scanf("%d", &guessed_number);
//         }
        
//         else {
//             won = 1;
//             break;
//         }
//     }

//     if (won && lives)
//     {
//         printf("\nCongratulations! You guessed the number %d\nin %d attempts.\n\nStats:\n\nLives remaining: %d\nAttempts: %d\n", actual_number, i, lives, i);
//     }
//     else {
//         printf("DEFEAT! All 4 lives lost...\nBetter luck next time.\n");
//         printf("Stats:\nLives remaining: %d\nAttempts: %d\n", lives, i);
//     }
//     return 0;
// }


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
            printf("Guess higher please.\n");
        }
        else if (guessed_number > actual_number) {
            printf("Guess lower please\n");
        }
        else {
            printf("Congrats!\n");
        }
        no_of_guesses++;
    } while (guessed_number != actual_number); //I get why he did this...is this what you wanted me to add in the for loops condition?
    
    printf("You guess the number in %d guesses\n", no_of_guesses);
    return 0;
}


