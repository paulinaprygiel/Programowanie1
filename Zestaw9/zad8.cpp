#include <iostream>
#include <string>
using namespace std;
string dec2bin (string slowo1)
{

    string wynik;
    int liczba=stoi(slowo1);

    while(liczba!=0)
    {
        char digit = liczba%2 +48;
        wynik+=digit;
        liczba/=2;
    }
    int dlugosc = wynik.length();
    char tmp;

    for (int i=0; i<dlugosc/2; i++)
    {
        tmp=wynik[i];
        wynik[i]=wynik[dlugosc-1-i];
        wynik[dlugosc-1-i] = tmp;
    }

    return wynik;
}


int main()
{
    string slowo1;
    cin >> slowo1;
    cout <<dec2bin (slowo1 );
    return 0;
}

