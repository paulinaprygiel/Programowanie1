#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    int n;
    int max;
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
    max=A[0];
    for (int i =0; i<n; i++)
    {
        if (*(A+i)>max)
        {
           max = *(A+i);
        }
    }
    cout << max;

    delete [] A;
    return 0;
}
