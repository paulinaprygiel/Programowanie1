#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    int n;
    int ctr=0;
    srand(time(NULL));
    cin >> n;

    int *A;
    A = new int[n];

    for (int i = 0; i < n; i++)
    {
        *(A+i) = rand() % 11;
        cout << *(A+i) << " ";
    }
    cout << endl;
    for (int i =0; i<n; i++)
    {
        if (*(A+i)%2==0)
        {
          ctr++;
        }

    }
    cout << ctr;

    delete [] A;
    return 0;
}
