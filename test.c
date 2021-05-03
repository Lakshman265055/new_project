#include "unity.h"
#include "head.h"
#include "unity_internals.h"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_grade(void);

void test_avg(void);

int main(){

    UNITY_BEGIN();

    RUN_TEST(test_grade);
    RUN_TEST(test_avg);

    return UNITY_END();

}

void test_grade(void){

TEST_ASSERT_EQUAL('A',grade(60));
TEST_ASSERT_EQUAL('O',grade(76));

}

void test_avg(void){

TEST_ASSERT_EQUAL(100,avg(100,100,100));
TEST_ASSERT_EQUAL(96,avg(100,90,100));

}