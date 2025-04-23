#include <stdio.h>

#define MAX_IDS 32

int main()
{
  char my_char = 'a'; // Correct way to declare a single character
  printf("%c\n", my_char);

  char *my_string = "my string mate";
  printf("%s\n", my_string);

  int ids[MAX_IDS] = {0};
  printf("%d\n", ids[0]);

  // For loop
  for(int i = 0; i < MAX_IDS; i++) {
    ids[i] = i*i;
    printf("%d\n", ids[i]);
  }

  // While loop
  int i = 0;
  while (i < 10) {
    printf("i is equal to %d\n", i);
    i++;
  }

  // Do while loop

  // This will be guaranteed to run a least once.
  // Because the condition is only checked after the do clause
  // So even if the condition is false the program will run it at least once
  i = 0;
  do {
    ids[i] = i*i;
    printf("%d\n", ids[i]);
    i++;
  } while (i < MAX_IDS);

  return 0;
}