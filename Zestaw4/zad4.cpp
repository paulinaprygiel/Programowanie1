//
// Created by Paulina Prygiel on 29/03/2021.
//
#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{

    int B[12];
    srand(time(NULL));
    for(int i=0; i<12;i++)
    {

        B[i]= rand()%10+1;
        cout<<i+1<<". "<<B[i]<<endl;
    }









    return 0;
}

