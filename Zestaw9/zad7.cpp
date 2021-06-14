#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string bin2dec (string slowo1)
{
    int wielkosc = slowo1.length();
    int suma = 0;
    string wynik;

    for (int i = 0; i < wielkosc; i++)
    {
        //zamiana z ascii, mnozenie kolejnych znakow dwojokwych przez potegi dwojki od konca
        suma += ((slowo1[i] - 48) * (pow(2, (wielkosc - 1 - i))));
    }

//konwersja wartosci numerycznej na tekst
    return to_string(suma);
}

int main()
{
    string string1;
    cin >> string1;

    cout <<bin2dec(string1);

}