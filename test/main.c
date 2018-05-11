#define CTEST_MAIN

#include <functions.h>
#include <ctest.h>


CTEST(Mass, Correct_Mass)
{
int A[17], i;
for(i=0; i<=15;i++)
A[i]=0;
int result=mass(A);
int expect=1;
ASSERT_EQUAL(expect,result);	
}

CTEST(Prow, Correct_Prow)
{ int A[17], i,j=0;
	for (i=1; i<16; i++)
	{
	A[j]=i;
	 j++;
	}	
A[15]=0;
int result = prow(A);
int expect = 1;
ASSERT_EQUAL(expect,result);	
}


CTEST(Prow, Incorrect_Prow)
{ int A[17], i,j=0;
	for (i=1; i<16; i++)
	{
	A[j]=i;
	 j++;
	}	
A[15]=0;
A[13]=15;
A[14]=14;

int result = prow(A);
int expect = 0;
ASSERT_EQUAL(expect,result);	
}




int main(int argc, const char** argv) 
{
    int test_res = ctest_main(argc, argv);
    return test_res;
}

