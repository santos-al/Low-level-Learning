#include <stdio.h>

#define MAX_INTEGERS 10

int main(int argc, char **argv) {

    // create an array of 10 integers 
    int myarray[MAX_INTEGERS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // set the 4th element to 2
    myarray[4] = 2;

    // print the 4th element
    printf("%d\n", myarray[4]);

    return 0;

}