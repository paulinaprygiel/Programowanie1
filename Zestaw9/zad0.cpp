#include <iostream>
using namespace std;
bool pal (string slowo)
{
    int dlugosc = slowo.length();

    for (int i=0; i<dlugosc/2.; i++)
    {
        if (slowo[i]!=slowo[dlugosc-1-i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string slowo;
    cin >> slowo;
   cout<<  pal (slowo);
    return 0;
}
