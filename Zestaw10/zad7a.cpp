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

    if((ctr_maxi*100)/ctr_votes >50)
    {
        cout<<"Winner:"<<maxi;
    }else
    {
        cout<<"Another round"<<endl;
        cout<<endl;
        char votes_2 [ctr_votes];
        int p=0;
        for(int i=0 ; i < ctr_votes ; i++)
        {
            if(votes[i]!=maxi)
            {
                votes_2[p] = votes[i];
                p++;
            }
        }
        char maxi2 = votes_2[0] ;
        int ctr_maxi2 = 0;


        for(int j=0; j<p ; j++)
        {
            if(votes_2[0]==votes_2[j])
            {
                ctr_maxi2++;
            }
        }


        for(int i=1; i < p ; i++)
        {
            int ctr_vs2 = 0;

            for(int j=0; j<p ; j++)
            {
                if(votes_2[i]==votes_2[j])
                {
                    ctr_vs2++;
                }
            }

            if(ctr_vs2 > ctr_maxi2)
            {
                ctr_maxi2 = ctr_vs2;
                maxi2 = votes_2[i];
            }
        }

        if((ctr_maxi*100)/2 > (ctr_maxi2*100)/2)
        {
            cout<<"Winner"<<maxi<<endl;
        }else
            cout<<"Winner"<<maxi2<<endl;

    }






    plik.close();







    return 0;
}
