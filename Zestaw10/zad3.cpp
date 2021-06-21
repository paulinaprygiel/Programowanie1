#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    fstream plik;
    string line;
    time_t czas; //zmienna przechowujaca czas
    time(&czas);
    plik.open("time.txt", ios::out);

    plik<<ctime(&czas);

    plik.close();




    return 0;
}