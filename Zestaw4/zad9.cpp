#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int N;
    cout<<"Podaj koncowa wartosc przedzialu";
    cin>>N;
    bool T[N+1];  //
    int w;

    cout << "Liczby pierwsze z tego przedzialu to: ";

    for(int i = 2; i <=N; i++) T[i] = true;


    for(int i = 2; i < N; i++)
        for(w = i + i; w <= N; w = w + i) T[w] = false;



    for(int i = 2; i <= N; i++)
        if(T[i]) cout << i << " ";


    return 0;
}