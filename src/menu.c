#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"

int main() 
{ 
    char c;
    printf("a. Правила\n");
    printf("b. Начать игру\n");
    printf("c. Выход из игры\n");

    while(c != 'c') {
        c = getchar();
        switch(c) {

        case 'a': {
            system("clear");
            printf("b. Начать игру\n");
            printf("c. Выход из игры\n");
            printf("Цель игры расставить числа в порядке возрастания. Введите"); 
            printf(" число с клавиатуры, и оно поменяется с пустым квадратом ");
            printf("(менять можно только соседние с пустой клеткой квадраты.");
            break;
        }

        case 'b': {
            system("clear");
            int A[17];
            mass(A);
            move(A,0);
            system("clear");
            printf("a. Правила\n");
            printf("b. Начать игру\n");
            printf("c. Выход из игры\n");	
            break;
        }

        case 'c': 
            return 0;
    
        default: {
            if(c != 10) printf("Неверный ввод, попробуйте еще раз.\n");
            printf("\n");
            break;
        }
        }
    }

return 0;
}
