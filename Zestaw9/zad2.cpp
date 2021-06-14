#include <iostream>
using namespace std;
string rewerse (string slowo)
{
    int dlugosc = slowo.length();
    char tmp;

    for (int i=0; i<dlugosc/2; i++)
    {
       tmp=slowo[i];
       slowo[i]=slowo[dlugosc-1-i];
       slowo[dlugosc-1-i] = tmp;
    }

    return slowo;


}
int main()
{
    string slowo;
    cin >> slowo;
   cout << rewerse (slowo);
    return 0;
}

