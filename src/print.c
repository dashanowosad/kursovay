#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"

int print(int A[], int test)
{
    int i, j, t = 0;
    for (i = 0; i <= 15; i++) {
        for (j = 0; j <= 15; j++) {
            if ((A[i] == A[j]) && (i != j)) t++;
        }
    }
    if (test != 0) {
        printf("0. Завершить игру\n");

        printf("\n");
        printf("%d\t %d\t %d\t %d\t", A[0], A[1], A[2], A[3]);
        printf("\n");
        printf("%d\t %d\t %d\t %d\t", A[4], A[5], A[6], A[7]);
        printf("\n");
        printf("%d\t %d\t %d\t %d\t", A[8], A[9], A[10], A[11]);
        printf("\n");
        printf("%d\t %d\t %d\t %d\t", A[12], A[13], A[14], A[15]);
        printf("\n");
    }
    if (t == 0)
        return 1;
    
    else
        return 0;
}
