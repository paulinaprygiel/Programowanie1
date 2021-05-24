#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    int n;
    int przesuniecie;
    int temp;
    int m;
    srand(time(NULL));
    cout << " Podaj liczbe elementów tablicy";
    cin >> n;
    cout << " Podaj przesuniecie w lewo";
    cin >> przesuniecie;
    m = przesuniecie%n;

    int *A;
    A = new int[n];
    int * B;
    B = new int [n];

    for (int i = 0; i < n; i++)
    {
        *(A+i) = rand() % 11;
        *(B+i) = *(A+i);
        cout << *(A+i) << " ";
    }
    cout << endl;

    for (int i =0; i<n; i++)
    {
        *(A+i) = B[(i+m+n)%n];
        cout << *(A+i) << " ";
    }


    delete [] A;
    delete [] B;
    return 0;
}