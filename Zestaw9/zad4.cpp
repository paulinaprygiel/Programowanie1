#include <iostream>
#include <string>
using namespace std;


bool dirty(string slowo1)
{
    int dlugosc = slowo1.length();
    for(int i=0;i<dlugosc;i++)
    {
        if((slowo1[i] < 64) || (slowo1[i] >= 91 && slowo1[i] <= 96) || (slowo1[i] > 122))
        {
            return true;
        }

    }

    return false;
}



int main(){
    string p ;
    cin>>p;


    cout << dirty(p);


    return 0;
}



