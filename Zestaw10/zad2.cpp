#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   int tab[26]={0};
    fstream plik;
    plik.open("Jabberwocky.txt",ios::in); // wczytaj z pliku
    char znak;

    if(plik.is_open())
    {
        while(!plik.eof())
        {
            plik >> znak;
            if(znak >=65&&znak<=90)
                tab[znak-65]++;
            if(znak >=97&&znak<=122)
                tab[znak-97]++;
        }
    }
    plik.close();
    for(int i=0;i<26;i++)
        cout<<tab[i]<<" ";





    return 0;
}
