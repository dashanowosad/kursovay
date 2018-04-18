#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"
#include <time.h>

void mass(int A[])
{ 
srand(time(NULL));
int i,k;
while(1)
{
	for (i=1;i<=15;i++)
		{
		A[i]=i;
		}
	A[0]=0;
	for(i=0;i<16;i++)
	std::swap(A[i],A[rand()%16]);
	k=prow(A);
	if (k==1) break;
}
}
