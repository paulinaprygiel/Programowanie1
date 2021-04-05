//
// Created by Paulina Prygiel on 29/03/2021.
//

#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>

using namespace std;





    using namespace std;

    int main()
    {

        int B[12];
        int max;
        int n=12;
        max=B[0];
        srand(time(NULL));
        for(int i=0; i<n;i++)
        {

            B[i]= rand()%10+1;
            cout<<i+1<<". "<<B[i]<<endl;
        }

        for(int i=1; i<n; i++)
            if(max<B[i])
                max=B[i];
        cout<<"Najwieksza liczba w tablicy to "<<max<<endl;






    return 0;
}
