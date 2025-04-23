# include <stdio.h>


int add(int x, int y) {
  int z = x + y;
  return z;
}

int main(int argc, char *argv[]) {
  int num1 = 2;
  int num2 = 3;

  int answer = add(num1, num2);
  printf("%d\n", answer);

  return 0;
}