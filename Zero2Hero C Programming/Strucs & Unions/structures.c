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

int main()
{

  struct employee_t employees[MAX_EMPLOYEES];



  struct employee_t Fred;
  Fred.income = 100.00;
  Fred.is_manager = true;

  printf("%f\n", Fred.income);

  return 0;
}


// EXAMPLES

// BAD 
struct mystruct {
    int i;
    char c;
};

int main() {
    struct mystruct structure_name;
}

// GOOD
struct mystruct1 {
    int i;
    char c;
};

int main() {
    struct mystruct1 structure_name = {0};
}


// BEST
struct mystruct2 {
    int i;
    char c;
};

int main() {
    struct mystruct2 structure_name = {
        .i = 4,
        .c = 'A',
    };
}


