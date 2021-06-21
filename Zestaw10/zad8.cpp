#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <algorithm>

using namespace std;


int main()
{

    fstream plik;
    string line="";
    int ctr_votes=0;
    int ctr_line=0;


    plik.open("election.txt", ios::in);

//liczba głosujacych
    if(plik.is_open())
    {
        while(plik >> line)
        {
            ctr_votes++;
        }
    }

    plik.close();

    plik.open("election.txt", ios::in);

    if(plik.is_open())
    {

        while(getline(plik,line))
        {
            ctr_line++;
        }
    }

    plik.close();
    int n = (ctr_votes - ctr_line)/(ctr_line*2);
    char kandydat_nazwa[n];
    int kandydat_punkty[n];




    for(int i=0; i<n ; i++)
    {
        kandydat_nazwa[i] = 97+i;

    }

    for(int i=0 ; i < n ; i++)
    {
       kandydat_punkty[i]=0;

    }
    char liczba_kand[n];
    plik.open("election.txt", ios::in);

    if(plik.is_open())
    {

        while(getline(plik,line))
        {
            int p=0;

            for(int i= line.length()- 2 ; i>=3 ; i = i - 2)
            {

                liczba_kand[p] = line[i];

                for(int j=0 ; j < n ; j++)
                {
                    if(kandydat_nazwa[j] == liczba_kand[p])

                    {
                        kandydat_punkty[j] += p;
                    }
                }

                p++;

            }


        }
    }

    cout<<endl;
    cout<<"Results"<<endl;
    cout<<endl;



    for(int i=0 ; i < n ; i++)
    {

        cout<<"Candidate "<<kandydat_nazwa[i]<<" got "<<kandydat_punkty[i]<<" votes"<<endl;

    }

    int maxi = kandydat_punkty[0];
    char wygra = kandydat_nazwa[0];


    for(int i=0 ; i < n-1 ; i++)
    {
        if(maxi < kandydat_punkty[i+1])
        {



            maxi = kandydat_punkty[(i+1)];
            wygra = kandydat_nazwa[(i+1)];

        }

    }

    cout<<endl;

    cout<<"Winner: "<<wygra<<endl;

    cout<<endl;
    return 0;
}


