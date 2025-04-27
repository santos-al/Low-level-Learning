#include <stdio.h>

// something is wrong here :(
int swap( int *a, int *b) {
    int *temp;
    temp = *a;
    *a = *b;
    *b = temp;
}