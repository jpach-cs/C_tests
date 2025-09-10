// code.h
#ifndef CODE_H // include guard prevents multiple inclusion
#define CODE_H

// comments
extern char * AUTHOR_NAME; 
extern char * AUTHOR_AUTHORSHIP;

// ----------------- DATA STRUCTURES -----------------
// Declaration of a simple test struct

struct TestStruct
{
    int var;
};
// ----------------- GLOBAL VARIABLES -----------------
// Note: use of globals is generally discouraged but okay for small demos
int a;      // test variable 'a'
int * p;    // pointer used in tests



// ----------------- FUNCTION PROTOTYPES -----------------
int multiply(int x, int y);    // multiplies two integers
int addOne(int * pointer);     // increments value pointed to by pointer



#endif