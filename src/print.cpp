#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"

using namespace std;
void print(int A[])
{
mass(A);	
cout<<"| " <<A[1]<< " | " <<A[2]<< " | " <<A[3]<< " | " <<A[4]<< " |"<<endl;
cout<<"|---------------|"<<endl;
cout<<"| " <<A[5]<< " | " <<A[6]<< " | " <<A[7]<< " | " <<A[8]<< " |"<<endl;
cout<<"|---------------|"<<endl;
cout<<"| " <<A[9]<< " | " <<A[10]<< " | " <<A[11]<< " | " <<A[12]<< " |"<<endl;
cout<<"|---------------|"<<endl;
cout<<"| " <<A[13]<< " | " <<A[14]<< " | " <<A[15]<< " | " <<A[0]<< " |"<<endl;
cout<<"|---------------|"<<endl;
}
