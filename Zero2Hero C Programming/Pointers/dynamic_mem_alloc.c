#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 1000

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

  // This value comes from the database header
  int n = 4;

  struct employee_t *employees = malloc(sizeof(struct employee_t) * n);
  if (employees == NULL) {
    printf("Allocator failed");
    return -1;
  }

  free(employees);
  employees = NULL;

  initialize_employee(&employees[0]);


}