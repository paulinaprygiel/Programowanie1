#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    int n;
    int temp;
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

    for (int i =0; i<n/2.; i++)
    {
      temp = *(A+i);
      *(A+i)=*(A+n-i-1);
      *(A+n-i-1)=temp;
    }
    for (int i =0; i<n; i++)
    {
        cout << *(A+i) << " ";
    }


    delete [] A;
    return 0;
}
