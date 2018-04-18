#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"
#include <time.h>

void mass(int A[])
{ 
srand(time(NULL));
int i,control, number;
struct timespec tw={1,000};
struct timespec tr;
while(1)
{
	number++;
	for (i=1;i<=15;i++)
		{
		A[i]=i;
		}
	A[0]=0;
	for(i=0;i<16;i++)
	std::swap(A[i],A[rand()%16]);
	nanosleep(&tw,&tr);
	system("clear");
	print(A);
	control=prow(A);
	if (control==1) break;
}
puts("\n");
printf("Решаемая комбинация создана с %d попытки",number);
puts("\n");
}
