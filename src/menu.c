#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"


int main()
{ 
setlocale(LC_ALL,"Rus");
char c;
printf("a. Правила\n");
printf("b. Начать игру\n");
printf("c. Выход из игры\n");

while(c!='c')
{
    	c=getchar();
    	switch(c)
    	{
 		case 'a':
    		{
		system("clear");
    		printf("b. Начать игру\n");
    		printf("c. Выход из игры\n");
    		printf("Цель игры расставить числа в порядке возрастания. Введите число с клавиатуры, и оно поменяется с пустым квадратом(менять можно только соседние с пустой клеткой квадраты).");
		break;
    		}

		case 'b':
    		{
		system("clear");
		int A[16];
		mass(A);
		while (1)
		move(A);	
		break;
    		}

		case 'c':
    		{
		return 0;
    		}
		
	}

}
return 0;
}


