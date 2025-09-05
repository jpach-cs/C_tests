//#include <assert.h>   // commented out, not needed
#include "main.h"
#include "tests.h"
#include "unity.h"

int result; // global variable for test results

// ----------------- UNITY SETUP / TEARDOWN -----------------
void setUp() 
{  
    a = 4;
    p = (int*) malloc(sizeof(int));
    *p = 5;
    result = 0;
}

void tearDown() 
{
    free(p);
    result = 0;
}

// ----------------- TEST FUNCTIONS -----------------

void test_multiply_basic() 
{
    result = multiply(a, *p);
    TEST_ASSERT_EQUAL(20, result);
}

void test_multiply_with_zero() 
{
    *p = 0;
    result = multiply(a, *p);
    TEST_ASSERT_EQUAL(0, result);
}

void test_multiply_negative() 
{
    *p = -3;
    result = multiply(a, *p);
    TEST_ASSERT_EQUAL(-12, result);
}

void test_addOne_basic() 
{
    result = addOne(p);
    TEST_ASSERT_EQUAL(6, result);
}

void test_addOne_negative() 
{
    *p = -3;
    result = addOne(p);
    TEST_ASSERT_EQUAL(-1, result); // tests proper error handling
}

// ----------------- RUN ALL TESTS -----------------
int run_unity_tests(void) 
{
    UNITY_BEGIN();
    RUN_TEST(test_multiply_basic);     
    RUN_TEST(test_multiply_with_zero); 
    RUN_TEST(test_multiply_negative);

    RUN_TEST(test_addOne_basic);
    RUN_TEST(test_addOne_negative);
    return UNITY_END();
}
