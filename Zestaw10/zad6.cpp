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


    plik.open("election.txt", ios::in);

    if(plik.is_open())
    {
        while(getline(plik,line))
        {

            ctr_votes++;
        }
    }

    plik.close();

    plik.open("election.txt", ios::in);

    char votes[ctr_votes];
    int i=0;



    if(plik.is_open())
    {
        while(!plik.eof())
        {
            getline(plik,line);
            votes[i] = line[3];
            i++;

        }
    }



    char maxi = votes[0] ;
    int ctr_maxi = 0;


    for(int j=0; j<ctr_votes ; j++)
    {
        if(votes[0]==votes[j])
        {
            ctr_maxi++;
        }
    }


    for(int i=1; i < ctr_votes ; i++)
    {
        int ctr_vs = 0;

        for(int j=0; j<ctr_votes ; j++)
        {
            if(votes[i]==votes[j])
            {
                ctr_vs++;
            }
        }

        if(ctr_vs > ctr_maxi)
        {
            ctr_maxi = ctr_vs;
            maxi = votes[i]  ;
        }
    }

    cout<<"Winner:"<<maxi<<endl;


    plik.close();







    return 0;
}
