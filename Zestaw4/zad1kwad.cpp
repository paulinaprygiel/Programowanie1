

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int suma=0;
    int A[] = {1,3,5,7,9};

    for(int i=0;i<5;i++)
    {
        suma = suma + (pow(A[i],2));
    }

    cout<<sqrt(suma/5);


    return 0;
}
