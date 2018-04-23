#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "functions.h"

void move(int A[])
{
int n, k,i,m,j;
scanf("%d", &n);
for (i=0; i<=15; i++)
{if (A[i]==0 ) k=i;
if (A[i]==n) j=i;}

if (((k-j)==1)||((j-k)==1)||((k-j)==4)||((j-k)==4))
{
m=A[k];
A[k]=A[j];
A[j]=m;
system("clear");
print(A);
}
else printf("Неверный ход");


}
