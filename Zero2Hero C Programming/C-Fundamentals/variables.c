#include <stdio.h>

// It is safer to keep variables in your local scope. It prevents you from losing track of everything 

// This is done in the global scope. It is outside nay function
int g_NumPersons = 0;

void some_other_function() {
    // This is done in the local scope.
    // It is being done inside a function
    int personID = 1;
}

int main() {
    // variables
    // type name = initial value;
    int personID = 0;
    int person2ID = personID + 1;

    printf("Hello world!!");

    // You can identify additional sub scopes inside a function by adding another set of parentheses
    personID += 1;
    {
        // This is a sub scope the the seocnd line of code does not affect any of the person IDs outside of this subscope
        int personID = 0;
        personID = 3;
    }
}

