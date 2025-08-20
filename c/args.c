#include <stdlib.h>
#include <stdio.h>

// So as you may have noticed, I, and a lot of other people, tend to make our entry point function (aka 'main') take in the variables argc and argv
// These are really quite simple to understand, even though they can seem scary to some

// Essentially, they are just the commands/arguments that you pass into a program, e.g.: "git status"
// In this example, it executes the program git (which is the first argument/argv[0]) and passes in the command 'status'(argv[1])

int main(int argc, char* argv[]){
    // argc is the number of commands (1 for the program alone, 2+ when executed with parameters passed in)
    // argv is an array of strings, aka character pointers that contain the value of arguments (argv[0] is always equal to the program's name)
    // You can also pass in argv as a char**, because arrays decay to pointers when passed through a function call (more on that in arrays.c)
    // This also means that argv's size is unknown during runtime, which means you must use argc for bounds checking
    // As an example, lets print out all the arguments passed in:
    if (argc < 2) return 0;            // Bounds checking
    for (int i = 1; i < argc; i++){    // i starts at 1 to avoid printing the program's name
        printf("%s\n", argv[i]);
    }
    
    getchar();
    return 0;
}