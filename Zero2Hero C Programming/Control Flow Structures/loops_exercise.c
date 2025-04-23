#include <stdio.h>

#define MAX_NUMS 1000

// Function Prototype
void count_evens_to_1000(void);

int main() {

  count_evens_to_1000();

  return 0;
}

void count_evens_to_1000(void) {
  for(int i = 0; i < 1000; i += 2) {
    printf("%d\n", i);
  }
}

// PRO TIP

// Normally you would have to define all you functions before running your main function.
// In this case the continues to work even thought the main function runs before the count function is created.
// This is before we are using a function prototype at the beginning of the file.
// With this we can put the count function after the main function, without any errors

//  Function Prototypes allow the code to be run in a nonlinear fashion.
// They are also considered best practice.

// ALSO they help catch bugs and errors at compile time.



