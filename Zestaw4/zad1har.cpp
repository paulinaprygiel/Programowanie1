
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int A[]={1,3,5,7,9};
    double suma=0;
    for(int i=0;i<5;i++)
    {
        suma = suma + pow(A[i],-1);
    }


    cout<<5/(suma);








    return 0;
}


