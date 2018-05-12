#define CTEST_MAIN

#include <functions.h>
#include <ctest.h>


CTEST(Mass, Correct_Mass)
{
int A[17];
int result = mass(A);
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


CTEST(Move, Correct_Move)
{int A[17];	
A[0]=3;
A[1]=12;
A[2]=1;
A[3]=15;
A[4]=7;
A[5]=8;
A[6]=13;
A[7]=6;
A[8]=2;
A[9]=14;
A[10]=11;
A[11]=4;
A[12]=5;
A[13]=10;
A[14]=9;
A[15]=0;
puts("\n");
print(A);
puts("\n");
printf("Введите 4 или 9\n");
int result = move(A,1);
int expect = 1;
ASSERT_EQUAL(expect,result);	
}

CTEST(Move, Incorrect_Move)
{int A[17];	
A[0]=3;
A[1]=12;
A[2]=1;
A[3]=15;
A[4]=7;
A[5]=8;
A[6]=13;
A[7]=6;
A[8]=2;
A[9]=14;
A[10]=11;
A[11]=4;
A[12]=5;
A[13]=10;
A[14]=9;
A[15]=0;
puts("\n");
print(A);
puts("\n");
printf("Введите любые числа кроме 4 или 9\n");
int result = move(A,2);
int expect = 0;
ASSERT_EQUAL(expect,result);	
}

int main(int argc, const char** argv) 
{
    int test_res = ctest_main(argc, argv);
    return test_res;
}

