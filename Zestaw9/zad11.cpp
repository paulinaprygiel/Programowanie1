#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

string zmiana(string slowo, int system1, int system2)
{


    int dlugosc = slowo.length();
    int suma=0;
    string wynik;

    for(int i=0; i < dlugosc; i++)
    {
        suma +=  ((slowo[i]-48) * (pow(system1,(dlugosc - 1 - i))));

    }
    while(suma!=0)
    {
        char digit = suma%system2 +48;
        wynik += digit;
        suma /=system2;
    }
    int dlugosc2 = wynik.length();
    char tmp;

    for (int i=0; i<dlugosc2/2; i++)
    {
        tmp=wynik[i];
        wynik[i]=wynik[dlugosc2-1-i];
        wynik[dlugosc2-1-i] = tmp;
    }
    return wynik;


}
int main(){


    string n;
    cout<<"Podaj liczbe " <<endl;
    cin>>n;
    cout<<"W jakim jest systemia "<<endl;
    int system1;
    cin >> system1;
    cout<<"Na jaki zamienic: " <<endl;
    int system2;
    cin >> system2;
    cout << zmiana(n, system1, system2);






    return 0;
}


