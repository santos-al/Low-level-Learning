#include <stdio.h>

int main() {
  int temp = 0;
  printf("What temp is it? ");
  scanf("%d", &temp);

  if (temp >= 70) {
    printf("Its hot!\n");
  } else if (temp >= 30 && temp < 70 ) {
    printf("Its mild out!\n");
  } else {
    printf("Its cold out!\n");
  }

  return 0;


}