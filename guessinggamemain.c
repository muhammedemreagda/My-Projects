#include <math.h>   // C program for the above approach
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Function that generate a number in // the range [1, N] and checks if the // generated number is the same as the // guessed number or not
void guess(int N){
    int number, guess, numberofguess = 0;
    srand(time(NULL));               //Seed random number generator  
    number = rand() % N;             // Generate a random number
    printf("Guess a number between 1 and %d: \n",N);
    do {                             // Using a do-while loop that will // work until user guesses // the correct number
        if (numberofguess > 9) {
            printf("\nYou Loose!\n");
            break;}
        scanf("%d", &guess);         // Input by user
        if (guess > number){         // When user guesses lower   // than actual number
            printf("Lower number please!\n");
            numberofguess++;}
        else if (number > guess){    // When user guesses higher  // than actual number
            printf("Higher number please!\n");
            numberofguess++;}
        else                         // Printing number of times  // user has taken to guess  // the number
            printf("You guessed the number in %d attempts!\n",numberofguess);
    } while (guess != number);}
int main(){                          // Driver Code
    int N = 100;
    guess(N);                        // Function call
    return 0;}
