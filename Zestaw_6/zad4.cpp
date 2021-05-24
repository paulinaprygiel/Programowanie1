#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    int n;

    cin >> n;
    int *A;
    int *B;

    A = new int [n];
    B = new int [n];


    for ( int i=0;i<n;i++) {
        cin >> *(A + i);
        *(B + i) = (*(A + i) % 3);
    }



    for ( int i=0;i<n;i++)
    {
        cout << *(A+i)<<" ";
    }
cout << endl;
    for ( int i=0;i<n;i++)
    {
        cout << *(B+i)<<" ";
    }

    delete [] A;
    delete [] B;


    return 0;
}
