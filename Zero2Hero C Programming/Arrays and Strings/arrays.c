#include <stdio.h>

#define MAX_IDS 32

int main()
{

  int int_1, int_2 = 0;

  // Will create and array with a max amount of space being 32, because we defined it outside main. Will not have anything inside of it though
  int ids[MAX_IDS];

  // Will create an array with the value 1, 2, 3 and with space for 3 elements in the array
  int ids_1[] = {1, 2, 3};

  // Will create an array using the limit from MAX_IDS but will only contain three elements
  int ids_2[MAX_IDS] = {11, 2, 3};

  int id = ids_2[0];

  // The printf function takes two arguments, the first being the type and the other the item itself. In this case since we are trying to print and integer,
  // we have to tell the printf function that we are passing it an integer. The %d means that it is a "decimal integer (base 10)"
  printf("%d\n", id);

  // We can also add a value into the array

  // The "0x41" is hex notation and its int equivalent is 65
  ids_2[3] = 0x41;
  // We add the "\n" because the printf function does not automatically create a new line
  printf("%d\n", ids_2[3]);
}