#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


float perform_calc(float num1, float num2, char calc);

int main() {

  printf("Welcome to the calculator app.\n");

  
  float num1;
  printf("Please enter the first number: ");
  scanf("%f", &num1);

  float num2;
  printf("Please enter the second number: ");
  scanf("%f", &num2);
  
  getchar();
  char calc;
  printf("Please enter and expression: ");
  scanf("%c", &calc);

  float answer = perform_calc(num1, num2, calc);
  printf("Answer: %.2f\n", answer);
  
  // printf("Expression: %c\n", calc);
  // printf("Num 1: %f\n", num1);
  // printf("Num 2: %f\n", num2);

  return 0;
}

float perform_calc(float num1, float num2, char calc) {
  float answer;

  if (calc == '+') {
    answer = num1 + num2;
  } else if (calc == '-') {
    answer = num1 - num1;
  } else if (calc == '*') {
    answer = num1 * num2;
  } else if (calc == '/') {
    answer = num1 / num2;
  }
  
  return answer;
}
