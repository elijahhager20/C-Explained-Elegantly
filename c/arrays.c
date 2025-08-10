#include <stdio.h>
#include <stdlib.h>

void foo(int arr[]);
void foo2(int arr[], size_t size);

int main(int argc, char* argv[]){
    // Alright, let's get real here. Arrays suck, especially in C/C++. And they suck even more when you don't have access to C++'s other containers, like std::vector or std::map.
    // However, once you understand them, they essentially become pointers and some basic math.

    // Here, we declare an array with a size of 3, with the contents being integers 1-3
    int arr[3] = {1, 2, 3};

    // This is the size of the array in bytes
    size_t size = sizeof(arr) / sizeof(arr[0]);

    // When we pass it to a function (in this case, foo), it decays to a pointer (see more info in foo)
    foo(arr);

    // Despite this decay, you can still use an array in another function by doing this (see more explanation in foo2):
    foo2(arr, size);
    
    // Arrays are just pointers to it's first element and arr[n] actually is saying arr + n
    // It offsets the memory by the index
    getchar();
    return 0;
}

void foo(int arr[]){
    // Instead of this giving us the size of the array, it gives us the size of the pointer (usually 4 or 8 bytes depending on architecture)
    printf("sizeof(arr) in foo: %zu\n", sizeof(arr));

    // This is because fundamentally, arrays are just syntactic sugar for pointers.
    // When you declare an array, you're allocating a block of memory for multiple values.
    // But when you pass it to a function, it decays into a pointer to its first element.
}

void foo2(int arr[], size_t size){
    int arr2[size];

    for (size_t i = 0; i < size; i++){
        arr2[i] = arr[i];
    }

    // Now you can access arr2's size using sizeof, and it will give you the total byte size of the array (not just the pointer)
    printf("sizeof(arr2) in foo2: %zu\n", sizeof(arr2));
}