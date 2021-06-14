#include "iostream"
#include "string"

using namespace std;
int main()
{
    string tekst;
    cin >> tekst;

    int dlugosc = tekst.length();
    char alfabet [27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g','h', 'i','j', 'k' , 'l', 'm', 'n', 'o', 'p','q', 'r', 's','t','u', 'v', 'w', 'x', 'y', 'z'};
    int historgram [27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
    int ctr = 0;
    for (int i=0;i<26;i++)
    {
       for (int j=0; j<dlugosc; j++)
       {
           if (tekst[j] == alfabet[i])
           {
               ctr++;
           }
           historgram[i] = ctr;
       }
       ctr = 0;
    }

    for (int i = 0; i <26; i++)
    {
        cout << alfabet[i] << " wystepuje " << historgram[i]<<" raz(y)"<<endl;
    }
    return 0;
}
