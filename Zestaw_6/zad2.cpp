#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    int n;


    cin >> n;
    int*A;
    A = new int [n];

    for ( int i=0;i<n;i++)
    {
        cin>>A[i];
        }
    for ( int i=0;i<n;i++)
    {
        if (A[i]<0)
        {
            A[i] = 0;
        }
    }
    for ( int i=0;i<n;i++)
    {
        cout << A[i]<<endl;
    }

delete [] A;

    return 0;
}
