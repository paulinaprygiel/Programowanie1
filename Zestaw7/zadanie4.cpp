#include <iostream>

using namespace std;

int main()
{

    int N = 5;
    int** S = new int*[N];
    for(int n=0;n<N;n++)
    {
        *(S+n) = new int [n+1];
        for(int k=0;k<n+1;k++)
        {
            if (n==k||k==0)
            {
                *(*(S + n) + k) =1;
            }
            else
                *(*(S + n) + k) =  *(*(S + n-1) + k-1) + *(*(S + n-1) + k);
            // S[n][k] = S[n-1][k-1] + S[n-1][k]

        }


    }

    for(int n=0;n<N;n++)
    {
        for(int k=0;k<n+1;k++)
        {
            cout << *(*(S+n)+k) << ' ';
        }
        cout<<endl;
    }


    for(int n=0;n<N;n++)
    {
        delete[] *(S+n);
    }

    delete[] S;


    return 0;
}
