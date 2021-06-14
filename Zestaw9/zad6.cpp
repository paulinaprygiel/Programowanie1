#include <iostream>
#include <string>
using namespace std;
#include <iostream>
#include <string>
using namespace std;

bool pesel(string s)
{
    if (s.length() != 11)
        return false;

    //tablica z wagami
    int m[] = {1,3,7,9,1,3,7,9,1,3};
    int suma = 0;
    int ostatnia = 0;
    for(int i=0;i<10;i++)
    {
        //s[i]-48 - sprawadzamy do jedynki a ASCII
        suma += ((s[i]-48)*m[i]);

    }
    if (suma%10==0)
    {
        if(suma%10== s[10]-48)
            return true;
        else
            return false;
    }
    else
    {
        ostatnia = 10 - suma % 10;
        if (ostatnia == s[10] - 48)

            return true;

        else

            return false;
    }

}




int main(){

    string p;
    cin >> p;


    cout<<pesel(p);


    return 0;
}




