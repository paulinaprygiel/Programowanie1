//
// Created by Paulina Prygiel on 29/03/2021.
//
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int schowek, zamiana;
    int n=12;
    int B[n];

    srand(time(NULL));
    for(int i=0; i<n;i++)
    {

        B[i]= rand()%10+1;
        cout<<i+1<<". "<<B[i]<<endl;
    }
    do
    {
        zamiana=0;
                for(int i=0; i<n; i++)
                {
                    if (B[i]>B[i+1])
                    {
                        zamiana = zamiana +1;
                        schowek = B[i];
                        B[i]=B[i+1];
                        B[i+1] = schowek;
                    }
                }
    }
while (zamiana!=0);
for (int j=0; j<n; j++)
{
    cout<<B[j]<<endl;

}


    return 0;
}


