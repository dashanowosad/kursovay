#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "functions.h"

int move(int A[], int test) 
{
    int n, k, i, m, j, w, flag = 0;
    while(1) {
        if (test == 0) scanf("%d", &n);
        if (test == 4) n = 4;
        if (test == 5) n = 5;
        if (test == 19) n = 19;
        if (test == -4) n = -4;
        for (i = 1; i <= 15; i++) {
            if (A[i] == 0 ) k = i;
            if (A[i] == n) j = i;
        }

        if (((k - j) == 1) || ((j - k) == 1) || ((k - j) == 4) || ((j - k) == 4)) {
            m = A[k];
            A[k] = A[j];
            A[j] = m;
            system("clear");
            if (test == 0)
                print(A, 1);
            flag = 1;
        }

        else if (n == 0)
            break;

        else {
            if (test == 0)
                printf("Неверный ход"); 
            flag = 0;
        }
        w = win(A, 1);
        if (w == 1) 
            break;
        if (test != 0) 
            break;
    }
    if (flag == 1) return 1;
    else return 0;
}
