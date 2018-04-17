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
    	cout<<"Пятнашки - это логическая игра. В среднем людям приходится тратить 200-300 ходов на решение задачи. Цель игры: необходимо расставить в порядке возрастания все цифры за наименьшее число ходов. Цифры можно менять местами только с пустым квадратом и только по вертикали или горизонтали, по диагонали менять нельзя. Для того чтобы поменять местами квадрат, содержащий цифру, с пустым квадратом необходимо написать его номер."<<endl;
	break;
    	}
	case '2':
    	{
	system("clear");
    	cout<<"1. Правила"<<endl;
    	cout<<"3. Выход из игры"<<endl;
	int A[16];
	print(A);	
	break;
    	}
	
}
}
return 0;
}


