#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"
#include <time.h>

int mass(int A[], int test)
{ 
    srand(time(NULL));
    int i, control, number = 0, t, j, k = 0;
    struct timespec tw = {1,2};
    struct timespec tr;

    if (test == 0) {
        while(1) {
            number++;
            for (i = 1; i <= 15; i++) {
                A[i] = i;
            }

            A[0] = 0;
            for(i = 0; i <= 15; i++) {
                j = rand() % (i+1);		
                t = A[j];
                A[j] = A[i];
                A[i] = t;
            }

            system("clear");
            for(i = 0; i <= 15; i++) {
                if(A[i] == 0) {
                    t = A[15];
                    A[15] = A[i];
                    A[i] = t;
                }
            }

            print(A,1);
            nanosleep(&tw, &tr);
            control = prow(A);
            if (control == 1) {
                break;
            }
        }

        puts("\n");
        printf("Решаемая комбинация создана с %d попытки",number);
        puts("\n");
    }

    for(i = 0; i <= 15; i++) {
    if ((A[i] <= 0) || (A[i] > 15)) 
        k++;
    }
    if (k == 1) return 1;
    else return 0;
}
