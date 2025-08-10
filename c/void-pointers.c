#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    // Alright, heres a topic that seems super-scary but actually isn't too bad:
    // Void pointers (aka void*)

    // What is it?
    // Void pointers are a certain type of pointer that holds a memory address (just like any other pointer) but also doesnt infer a type (e.g., int* or char*)

    // Heres an example, right here:
    // We declare an integer variable with the value 5
    int var = 0;

    // Then we create a pointer to it's memory address, but instead of using int*, we use void*
    void* ptr = &var;

    // What does this do?
    // ptr holds var's memory address, but it has no idea how to interpet the bytes, as it doesn't know what type of variable it is due to it being a void pointer

    // Heres an example of where this can go wrong
    // printf("%d", *ptr);
    // This isn't allowed, because %d expects an integer, and even though ptr leads to an integer, ptr has no idea that it needs to interpet the value as an integer, so printf fails

    // However, you can cast to a void pointer as an integer still
    // For example:
    printf("%d", *(int*)ptr);
    // This works because we de-reference ptr as an integer, so printf gets it's nicely integer-formatted variable that it expects

    getchar();
    return 0;
}