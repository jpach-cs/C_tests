//#define clearBuffer() while (getchar() != '\n');
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "main.h"
#include "tests.h"

#define AUTHOR_NAME "Jakub Pach"
#define AUTHOR_AUTHORSHIP  "I acknowledge that I have worked on this assignment independently, except where explicitly noted and referenced. Any collaboration or use of external resources has been properly cited. I am fully aware of the consequences of academic dishonesty and agree to abide by the university's academic integrity policy. I understand the seriousness and implications of plagiarism."

// --------- FUNCTION IMPLEMENTATIONS ------------

int addOne(int * pointer)
{
    // check pointer validity and positive value
    if(!(*pointer >= 0))
    {
        fprintf(stderr, "Error: (*pointer) has to be greater or equal zero!\n");
        return -1;   // special error value
    }
    (*pointer)++;
    return *pointer;
}

int multiply(int x, int y) 
{
    return x * y;
}

// ----------------- MAIN PROGRAM -----------------

int main(int argc, char *argv[]) 
{
    int failed_tests  = 0;
    if (argc > 1 )
    {
        if(strcmp(argv[1], "--test") == 0) 
           failed_tests = run_unity_tests();
        else if(strcmp(argv[1], "--author") == 0) 
            printf(AUTHOR_NAME);
        else if(strcmp(argv[1], "--authorship") == 0) 
            printf(AUTHOR_AUTHORSHIP);
        else if(strcmp(argv[1], "--help") == 0) 
            printf("\n  --test\tRun unit tests\n  --author\tPrint author name\n  --authorship\tPrint academic honesty statement\n  --help\tShow this help message--test, --author, --authorship\n\n");
    }
    else
        printf("Wrong parameter. Use --help to see available options.\n");

    //run_unity_tests();
    //getchar(); // pause before exit (Windows)

    return failed_tests; // cmd/powershell:  echo $LASTEXITCODE
}