#include <stdio.h>

#define MAX_IDS 32

int main()
{

  int ids[MAX_IDS] = {0, 1, 2};

  printf("%d\n", ids[2]);

  // You can create a string by doing this
  char my_string[] = {'h', 'e', 'l', 'l', 'o', 0};

  // However this is more common convention of creating a string
  char *my_other_string = "Hello Mate!";
  
  printf("Hello World\n");
  printf("%s\n", my_string);
  printf("%s\n", my_other_string);


  return 0;
}

//  STRINGS
/*
Strings in C are null terminated or zero delimited. The way C reads the string is by going through each character and printing it until it reaches a zero. 
Thats why strings in C have a zero at the end. In the first example we add the zero manually, but in the second example using the other syntax, when C reads that string in double quotes,
it knows to null terminate it.
*/


// WHY always return 0 at the end of main??
/*

1. Indicating Successful Execution
The main function is the entry point of a C program, and it is defined to return an integer (int main). 
By convention, returning 0 indicates that the program executed successfully. This is a standard practice in C programming. 
If you return a non-zero value, it typically signals an error or abnormal termination of the program.

2. Communication with the Operating System
When your program finishes running, the operating system checks the return value of the main function. 
A return value of 0 tells the operating system that the program completed without errors. 
This is particularly useful in larger systems or scripts where the return value of a program might be used to determine the next steps in execution.

*/