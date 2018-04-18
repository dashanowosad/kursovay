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
cout<<"1. Правила"<<endl;
cout<<"2. Начать игру"<<endl;
cout<<"3. Выход из игры"<<endl;

while(c!='3')
{
    	c=getchar();
    	switch(c)
    	{
 	case '1':
    	{
	system("clear");
    	cout<<"2. Начать игру"<<endl;
    	cout<<"3. Выход из игры"<<endl;
    	cout<<"Цель игры расставить числа в порядке возрастания. Введите число с клавиатуры, и оно поменяется с пустым квадратом(менять можно только соседние с пустой клеткой квадраты)."<<endl;
	break;
    	}
	case '2':
    	{
	system("clear");
    	cout<<"1. Правила"<<endl;
	cout<<"2. Завершить и начать новую игру"<<endl;
    	cout<<"3. Выход из игры"<<endl;
	int A[16];
	print(A);	
	break;
    	}
	
}
}
return 0;
}


