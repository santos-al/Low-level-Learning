#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 1000

struct employee_t
{
  int id;
  char firstname[64];
  char lastname[64];
  float income;
  bool is_manager;
};

union my_union
{
  int first_val;
  char second_val;
  short third_val;
};

int main()
{

  struct employee_t employees[MAX_EMPLOYEES];

  union my_union called_union;
  called_union.first_val = 0x41424344;

  printf("%hx %hhx %x", called_union.third_val, called_union.second_val, called_union.first_val);

  return 0;
}