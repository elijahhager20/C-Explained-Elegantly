#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    // Okay, so pointers are actually really easy to understand compared to a lot of other elements in C
    // A pointer is a variable that holds the address of another variables memory
    // Example:
    
    // Integer
    int var = 5;
    // Pointer to the integer's memory address
    int* ptr = &var;
    // Syntax: <type>* <name> = &<var>
    // The * indicates that it's a pointer, and the type indicates that it's pointing to an integer
    // The & means the memory address of a variable, so &var is the memory address of var

    // You can dereference pointers to get the original value by using *
    printf("%d", *ptr);
    // the * before a pointer tells the program to look at what's at the memory address of the pointer (in this case ptr)

    // You can also declare pointers as void, which I explain in void-pointers.c
    void* vptr = &var;
    
    getchar();
    return 0;
}