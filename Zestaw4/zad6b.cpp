//
// Created by Paulina Prygiel on 30/03/2021.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int c, mc;
    int v, mv;
    int B[12];
    srand(time(NULL));
    for(int i=0; i<12;i++)
    {

        B[i]= rand()%10+1;
        cout<<i+1<<". "<<B[i]<<endl;
    }
    mc = 0;
    mv = B[0] -1;
    for (int j =0; j<12; j++)
    {
        if (B[j]!=mv)
        {
            v = B[j];
            c = 1;
            for (int k = j + 1; k < 12; k++)
                if (B[k] = v) {
                    c++;
                }
            if (c > mc) {
                mc = c;
                mv = v;
            }
        }
        else continue;

    }

cout << mv;







    return 0;
}

