#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"

using namespace std;
void print(int A[4][4])
{
mass(A);	
cout<<"| " <<A[1][1]<< " | " <<A[1][2]<< " | " <<A[1][3]<< " | " <<A[1][4]<< " |"<<endl;
cout<<"|---------------|"<<endl;
cout<<"| " <<A[2][1]<<  " | " <<A[2][2]<< " | " <<A[2][3]<< " | " <<A[2][4]<< " |"<<endl;
cout<<"|---------------|"<<endl;
cout<<"| " <<A[3][1]<< " | " <<A[3][2]<< " | " <<A[3][3]<< " | " <<A[3][4]<< " |"<<endl;
cout<<"|---------------|"<<endl;
cout<<"| " <<A[4][1]<< " | " <<A[4][2]<< " | " <<A[4][3]<< " | " <<A[4][4]<< " | "<<endl;
cout<<"|---------------|"<<endl;
}
