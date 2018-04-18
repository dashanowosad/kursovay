#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"

using namespace std;

int main()
{ 
setlocale(LC_ALL,"Rus");
char c;
cout<<"a. Правила"<<endl;
cout<<"b. Начать игру"<<endl;
cout<<"c. Выход из игры"<<endl;

while(c!='c')
{
    	c=getchar();
    	switch(c)
    	{
 		case 'a':
    		{
		system("clear");
    		cout<<"b. Начать игру"<<endl;
    		cout<<"c. Выход из игры"<<endl;
    		cout<<"Цель игры расставить числа в порядке возрастания. Введите число с клавиатуры, и оно поменяется с пустым квадратом(менять можно только соседние с пустой клеткой квадраты)."<<endl;
		break;
    		}

		case 'b':
    		{
		system("clear");
		int A[16];
		mass(A);	
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


