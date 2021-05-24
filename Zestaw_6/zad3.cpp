
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    int n;
    int sum=0;
    int ctr=0;


    cin >> n;
    int *A;
    A = new int [n];

    for ( int i=0;i<n;i++)
    {
        cin>>*(A+i);
        ctr++;
        sum += *(A+i);
        if (sum > 100)

            break;
    }
    if (ctr<n)
    {
        for (int i=ctr; i<n;i++)
        {
            *(A+i)=0;
        }
    }
    for ( int i=0;i<n;i++)
    {
        cout << *(A+i)<<endl;
    }


delete [] A;

    return 0;
}
