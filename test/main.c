#define CTEST_MAIN

#include <functions.h>
#include <ctest.h>

CTEST(Prow, Correct_Prow)
{ 
    int A[17], i, j = 0;
    for (i = 1; i < 16; i++) {
        A[j] = i;
        j++;
    }	
    A[15] = 0;
    int result = prow(A);
    int expect = 1;
    ASSERT_EQUAL(expect, result);	
}

CTEST(Prow, Incorrect_Prow)
{
    int A[17], i, j = 0;
    for (i = 1; i < 16; i++) {
        A[j] = i;
        j++;
    }	
    A[15] = 0;
    A[13] = 15;
    A[14] = 14;
    int result = prow(A);
    int expect = 0;
    ASSERT_EQUAL(expect, result);	
}

CTEST(Move, Correct_Move)
{
    int A[17];	
    A[0] = 3;
    A[1] = 12;
    A[2] = 1;
    A[3] = 15;
    A[4] = 7;
    A[5] = 8;
    A[6] = 13;
    A[7] = 6;
    A[8] = 2;
    A[9] = 14;
    A[10] = 11;
    A[11] = 4;
    A[12] = 5;
    A[13] = 10;
    A[14] = 9;
    A[15] = 0;
    int result = move(A,1);
    int expect = 1;
    ASSERT_EQUAL(expect, result);	
}

CTEST(Move, Incorrect_Move)
{
    int A[17];	
    A[0] = 3;
    A[1] = 12;
    A[2] = 1;
    A[3] = 15;
    A[4] = 7;
    A[5] = 8;
    A[6] = 13;
    A[7] = 6;
    A[8] = 2;
    A[9] = 14;
    A[10] = 11;
    A[11] = 4;
    A[12] = 5;
    A[13] = 10;
    A[14] = 9;
    A[15] = 0;
    int result = move(A,2);
    int expect = 0;
    ASSERT_EQUAL(expect, result);	
}

CTEST(Move, Going_abroad_mass_right)
{
    int A[17];	
    A[0] = 3;
    A[1] = 12;
    A[2] = 1;
    A[3] = 15;
    A[4] = 7;
    A[5] = 8;
    A[6] = 13;
    A[7] = 6;
    A[8] = 2;
    A[9] = 14;
    A[10] = 11;
    A[11] = 4;
    A[12] = 5;
    A[13] = 10;
    A[14] = 9;
    A[15] = 0;
    int result = move(A,3);
    int expect = 0;
    ASSERT_EQUAL(expect, result);	
}

CTEST(Move, Going_abroad_mass_left)
{
    int A[17];	
    A[0] = 3;
    A[1] = 12;
    A[2] = 1;
    A[3] = 15;
    A[4] = 7;
    A[5] = 8;
    A[6] = 13;
    A[7] = 6;
    A[8] = 2;
    A[9] = 14;
    A[10] = 11;
    A[11] = 4;
    A[12] = 5;
    A[13] = 10;
    A[14] = 9;
    A[15] = 0;
    int result = move(A,4);
    int expect = 0;
    ASSERT_EQUAL(expect, result);	
}

CTEST(Mass, Correct_Mass)
{
    int A[17], i, j = 0;
    for (i = 1; i < 16; i++) {
        A[j] = i;
        j++;
    }	
    A[15] = 0;
    int result = mass(A,1);
    int expect = 1;
    ASSERT_EQUAL(expect, result);	
}

CTEST(Mass, Incorrect_Mass_right)
{
    int A[17], i, j = 0;
    for (i = 1; i < 16; i++) {
        A[j] = i;
        j++;
    }	
    A[13] = 18;
    A[15] = 0;
    int result = mass(A,1);
    int expect = 0;
    ASSERT_EQUAL(expect, result);	
}

CTEST(Print, Correct_Print)
{ 
    int A[17], i, j = 0;
    for (i = 1; i < 16; i++) {
        A[j] = i;
        j++;
    }	
    A[15] = 0;
    int result = print(A,0);
    int expect = 1;
    ASSERT_EQUAL(expect, result);
}

CTEST(Print, Incorrect_Print)
{ 
    int A[17], i, j = 0;
    for (i = 1; i < 16; i++) {
        A[j] = i;
        j++;
    }	
    A[15] = 0;
    A[12] = 12;
    int result = print(A,0);
    int expect = 0;
    ASSERT_EQUAL(expect, result);
}

CTEST(Win, Correct_Win)
{ 
    int A[17], i, j = 0;
    for (i = 1; i < 16; i++) {
        A[j] = i;
        j++;
    }	
    A[15] = 0;
    int result = win(A,0);
    int expect = 1;
    ASSERT_EQUAL(expect, result);
}

CTEST(Win, Incorrect_Win)
{ 
    int A[17], i, j = 0;
    for (i = 1; i < 16; i++) {
        A[j] = i;
        j++;
    }	
    A[15] = 0;
    A[13] = 15;
    A[14] = 14;
    int result = win(A,0);
    int expect = 0;
    ASSERT_EQUAL(expect, result);
}

int main(int argc, const char** argv) 
{
    int test_res = ctest_main(argc, argv);
    return test_res;
}
