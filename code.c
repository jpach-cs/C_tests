#include "code.h"
#include <stdio.h>
char * AUTHOR_NAME = (char *) "Jakub Pach";
char * AUTHOR_AUTHORSHIP = (char *) "I acknowledge that I have worked on this assignment independently, except where explicitly noted and referenced. Any collaboration or use of external resources has been properly cited. I am fully aware of the consequences of academic dishonesty and agree to abide by the university's academic integrity policy. I understand the seriousness and implications of plagiarism.";


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