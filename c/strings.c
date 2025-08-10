#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
    // Strings in C suck, espicially without C++'s std::strings. But fundementally, they're just arrays

    // You've got two main options: heap (you control it) and stack (it dies when the function ends). Both can be useful in different scenarios

    // Heap allocated string
    char* str = malloc(128);

    // Copy the string into that memory
    strcpy(str, "Hello, heap!");

    // Stack allocated string
    char str2[128];

    // Copy the string into that memory
    strcpy(str2, "Hello, stack!");

    // The values of the two different strings and their addresses (Note that the addresses are the actually the address of the first character)
    printf("Value of heap string: %s\n", str);
    printf("Address of heap string: 0x%p\n", (void*)str);
    printf("\n");
    printf("Value of stack string: %s\n", str2);
    printf("Address of stack string: 0x%p\n", (void*)str2);

    // Free the heap allocated memory. If you don't do this, it's considered a memory leak
    free(str);

    // And also, %s doesnt actually expect an array of characters, it expects a pointer to an array of characters that ends with a null terminator (\0)

    getchar();
    return 0;
}

// With strcpy you can copy the string to anywhere in the memory block, not just the first byte
// For example:

// strcpy(str, "Hello")
// strcpy(str + 5, ", world!")

// This works because str is just a pointer to the first byte
// str + 5 is just 5 bytes deeper into the same memory block

// Strings are arrays, arrays are pointers, pointers are math