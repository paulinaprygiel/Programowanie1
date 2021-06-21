#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    fstream plik_palindrom;
    fstream plik_Ymordnilap;
    plik_palindrom.open("Palindromy.txt", ios::in);
    plik_Ymordnilap.open("Ymordnilap.txt", ios::out);

    string line;

    if(plik_palindrom.is_open())
    {
        while(!plik_palindrom.eof())
        {
            getline(plik_palindrom, line);
            if(line[0]=='"')
            {
                reverse( line.begin() , line.end());
                plik_Ymordnilap << line;
            }else
                plik_Ymordnilap << line;

            plik_Ymordnilap << endl;
        }
    }

    plik_palindrom.close();
    plik_Ymordnilap.close();

    return 0;
}
