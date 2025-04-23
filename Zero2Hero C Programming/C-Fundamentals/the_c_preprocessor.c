#include <stdio.h>

#define MAX_PERSONS 1024

#define DEBUG

int main() {

  #ifdef DEBUG
  printf("We are in debug mode: %s:%d", __FILE__, __LINE__);
  #endif

  return 0;

}
/* 

Compilation Process
The process of converting source code to machine code is the following steps.

Preprocessor
Compilation
Assembly
Linking
Preprocessor
In the preprocessor step, the compiler looks over all of the code and, before it does ANYTHING, runs macros on lines in the code that represent preprocessor macros. 
Some of these macros are the following...

#define: Defines a macro.
Example: #define PI 3.14
#undef: Undefines a previously defined macro.
Example: #undef PI
#include: Includes a file.
Example: #include <stdio.h>
#if: Conditional compilation directive.
Example: #if DEBUG
#ifdef: Checks if a macro is defined.
Example: #ifdef DEBUG
#ifndef: Checks if a macro is not defined.
Example: #ifndef DEBUG
#elif: Else if condition for #if.
Example: #elif DEBUG == 2
#else: Else condition for #if.
Example: #else
#endif: Ends a #if, #ifdef, or #ifndef block.
Example: #endif
#error: Generates a compiler error with a specified message.
Example: #error "Error message"
#pragma: Specifies diverse behavior depending on compiler.
Example: #pragma once
#line: Specifies the original line number and filename.
Example: #line 20 "myfile.cpp"
#warning (GCC): Generates a compiler warning with a specified message (GCC).
Example: #warning "Warning message"

*/