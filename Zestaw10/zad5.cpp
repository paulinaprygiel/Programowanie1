#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    int m;

    cin>>n;
    cin>>m;
    int a = 97;
    int ctr = 1;
    char kandydaci[m];
    int wyborcy[n];

    for(int i=0; i<m ;i++)
    {
        kandydaci[i] = a;
        a++;
    }

    for(int i=0 ; i<n ; i++)
    {
        wyborcy[i] = ctr;
        ctr++;


    }

    fstream plik;
    plik.open("election.txt", ios::out);

    if(plik.is_open())
    {
        for(int i=0 ; i < n ; i++)
        {
            plik << wyborcy[i] << ". " ;
            random_shuffle(kandydaci, &kandydaci[m]);
            for(int j=0 ; j<m ; j++)
            {
                plik << kandydaci[j] << " > ";
            }
            plik<<endl;
        }
    }

    plik.close();




    return 0;
}


