//
// Created by Paulina Prygiel on 29/03/2021.
//
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,m,ilosc,moda;
    int B[12];
    srand(time(NULL));
    for(int i=0; i<12;i++)
    {

        B[i]= rand()%10+1;
        cout<<i+1<<". "<<B[i]<<endl;
    }

    ilosc=0;
    for(int i =0; i<12; i++)
    {
        m=B[i];
        n=0;
        for (int j = 0; j<12; j++) {
            if (m == B[j]) n++;
            if (n > ilosc) {
                ilosc = n;
                moda = m;
            }
        }


    }

   cout<< "najczestszym elementem w tablicy jest "<< moda<< " wystepuje "<< ilosc << " razy";






    return 0;
}


