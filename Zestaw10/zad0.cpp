#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream plik("Jabberwocky.txt");//ios::in);;
    string line;
   // plik.open("Jabberwocky.txt", ios::in); //otwieramy plik do wyswietlenia

    while(getline(plik,line))
    {
        cout<<line<<endl;
    }

    plik.close();




    return 0;
}
