#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"

void mass(int A[4][4])
{ 
int i,j,k=1;
for (i=1;i<=4;i++)
	for(j=1;j<=4;j++)
	{
	A[i][j]=k;
	k++;
	}
A[4][4]=0;
}
