#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "functions.h"

using namespace std;
int prow (int A[])
{
int i,h,zero, result;
for (i=1;i<=15;i++) if(A[i]>A[i+1]) h++;

for(i=0;i<=15;i++) if (A[i]==0) zero=i;
if ((zero==1)||(zero==2)||(zero==3)||(zero==4)) zero=1;
else if ((zero==5)||(zero==6)||(zero==7)||(zero==8)) zero=2;
else if ((zero==9)||(zero==10)||(zero==11)||(zero==12)) zero=3;
else if ((zero==13)||(zero==14)||(zero==15)||(zero==0)) zero=4;

result=zero+h;
if ((result%3)==0) return 0;
else if ((result%2)==0) return 1;
return 0;
}
