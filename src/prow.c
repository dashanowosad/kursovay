#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "functions.h"

int prow(int A[])
{
    int i, h=0, zero=0, result=0;

    for (i = 1;i <= 16;i++) {
        if(A[i] > A[i+1]) {
            h++;
        }
    }

    for(i = 0;i <= 15;i++) {
        if (A[i] == 0) {
            zero = i;
        }
    }

    if ((zero == 0) || (zero == 1) || (zero == 2) || (zero == 3)) {
        zero = 1;
    }
    else if ((zero == 4) || (zero == 5) || (zero == 6) || (zero == 7)) {
        zero = 2;
    }
    else if ((zero == 8) || (zero == 9) || (zero == 10) || (zero == 11)) {
        zero = 3;
    }
    else if ((zero == 12) || (zero == 13) || (zero == 14) || (zero == 15)) {
        zero = 4;
    }

    result = zero + h;
    if ((result % 2) == 0) {
        return 1;
    }
    else
        return 0;
}
