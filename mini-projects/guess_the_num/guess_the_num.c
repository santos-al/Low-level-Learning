#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define check_numbers

int main() {
  
  printf("Welcome to guess the number\nYou have three trys to guess between 1 and 10...\n");

  srand(time(NULL));
  int random_int = rand() % 10 + 1;
  int user_input;
  int lives = 3;

  while (lives > 0) {

    printf("Enter a number: ");
    scanf("%d", &user_input);

    if (user_input == random_int) {

      printf("Congrats you got it right!\n");
      return 0;

    } else {
      
      printf("You got it wrong try again...\n");
      lives --;
      printf("%d lives left...\n\n", lives);

    }
  }
  printf("Random number: %d\n", random_int);
  printf("Your number: %d\n", user_input);

  return 0;
}

