//
// Created by Paulina Prygiel on 29/03/2021.
//
//
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int schowek, zamiana;
    int n=1;
    int ctr=0;
    int moda=0;
    int max_ctr=0;

    int B[12];
    srand(time(NULL));
    for(int i=0; i<12;i++)
    {

        B[i]= rand()%10+1;
        cout<<i+1<<". "<<B[i]<<endl;
    }
    do
    {
        zamiana=0;
        for(int i=0; i<12; i++)
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
    for (int j=0; j<12; j++)
    {
        cout<<B[j]<<endl;

    }


for(int i=0;i<12;i++)
{
    if (n != B[i])
    {
        if(max_ctr < ctr)
        {
            max_ctr = ctr;
            moda = n;
            ctr = 0;

        }else ctr = 0;
    }

    n = B[i];

    if (n == B[i])
    {
        ctr++;
    }

}


    cout<<"moda: "<<moda << " wystepuje "<< max_ctr<< " razy";



    return 0;
}








