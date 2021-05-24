#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    int n;
    srand(time(NULL));
    cin >> n;

    int *A;
    A = new int[n];

    int *p = A;

    for (int i = 0; i < n; i++)
    {
        *p = rand() % 11;
        cout << *p << " ";
        p++;
    }
    cout << endl;
    delete [] A;
    return 0;
}
