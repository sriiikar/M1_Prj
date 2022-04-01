#include "unity.h"
#include "test_func.h"

extern void test_snl(); // Calling test function from another file onto this file

void setUp(void)
{

}

void tearDown(void)
{

}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(test_snl);

    return(UnityEnd());
}