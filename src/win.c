#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"
#include <time.h>


int win(int A[])
{ 	int w,i;
	w=0;
	for (i=1;i<14;i++)
	if (A[i]<A[i+1]) w++;
	return w;
	
}
