/*********************
* Name: Bryson Shane
* Assignment: 2
* Purpose of the file: This is the main function of the program.
* The programs purpose to count the total amount of characters of the program name, count the total
* amount of parameters, and count each individual parameters total amount of characters within a command prompt.
* It then displays the total amount of characters for each individual parameter.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    printf("Hello World\n");
    printf("The program name is '%s'\n", argv[0]);
    printf("The length of the program name is %d\n", strlength(argv[0]));
    printf("The number of command line parameters: %d\n", argc - 1); //We subtract 1 ignoring the very first parameter that runs the program.
    
    for (int counter = 1; counter < argc; counter++) {
        printf("\tThe length of parameter %d is : %d\n", counter, strlength(argv[counter]));
        
    }

    return 0;
}
