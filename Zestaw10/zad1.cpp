#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream plik;
    string line;
    int suma=0;
    plik.open("Jabberwocky.txt", ios::in);

   if (plik.is_open()) {
       while (!plik.eof()) {
           plik >> line;
           suma++;
       }
   }
   cout<<suma;

    plik.close();


return 0;
}
