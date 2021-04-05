//
// Created by Paulina Prygiel on 29/03/2021.
//
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int A[] = {1,3,5,7,9};
    int n=5;
    int a;


    for(int i=0;i<sqrt(n);i++)
    {
        a = A[i];
        A[i]=A[n-i-1];
        A[n-1-i] = a;


    }
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }






    return 0;
}

