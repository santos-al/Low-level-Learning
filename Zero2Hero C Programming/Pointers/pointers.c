#include <stdio.h>
#include <stdbool.h>

struct employee_t {
  int id;
  int income;
  bool staff;
};

void initialize_employee(struct employee_t *e) {
  e->id = 0;
  e->income = 0;
  e->staff = false;

  return;
};

int main() {

  struct employee_t Fred;

  initialize_employee(&Fred);

  int x = 3;

  int *pX = &x;

  printf("%d\n", Fred.id);

  return 0;

}