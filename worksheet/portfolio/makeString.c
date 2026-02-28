
/*
Name: Iris Hunting
Student ID: 202028819
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char arguments[100];

    // process the command-line data using appropriate string functions
    strcpy(arguments, argv[1]);

    for (int i = 2; i < argc; ++i) {
        strcat(arguments, "-");
        strcat(arguments, argv[i]);
    }

    printf("%s\n",arguments); // use only this single print statement in your submitted code

    return 0;
}