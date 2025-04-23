#include <stdio.h>


// Write your function here!
int add_two_numbers(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int main(int argc, char *argv[]) {
  int num1 = 20;
  int num2 = 3;

  int answer = add_two_numbers(num1, num2);
  printf("%d\n", answer);

  return 0;
}