#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    // Okay, this one will be a short one, and it's deeply related to void pointers
    
    // What is type punning?
    // Type punning is the act of treating an address in memory pointed to by a pointer as a different type than what it is
    // For example:
    
    // Declare and assign an integer and a pointer towards it
    int var = 5;
    int* ptr = &var;

    // Then cast to it as a float or other type of pointer
    printf("%f\n", *(float*)ptr);
    // This WILL compile but breaks C/C++ conventions and is considered undefined behavior

    // You can also achieve type punning through void pointers, e.g,
    void* vptr = &var;
    printf("%f\n", *(float*)ptr);

    // To see more about void pointers, view void-pointers.c

    getchar();
    return 0;
}