//
// Created by Paulina Prygiel on 29/03/2021.
//
#include <iostream>


using namespace std;

int main()
{

    int A[] = {1,3,5,7,9};
    int n;
    int a;
    cout<< "wprowadz n";
    cin>>n;




    for(int i=0;i<5;i++)
    {
        a = A[i];
        A[i]= a+n;
        cout<<A[i]<<endl;
    }






    return 0;
}


