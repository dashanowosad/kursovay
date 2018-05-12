#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"
#include <time.h>

int win(int A[])
{ 
    int w, i;
    w = 0;
    for (i = 0;i < 15;i++) {
        if (A[i] < A[i+1]) {
            w++;
        }
    }
    if (A[15] == 0) 
        w++;
return w;	
}
