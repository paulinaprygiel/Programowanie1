
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int A[5]= {1,3,5,7,9};
    int iloczyn=1;

    for(int i=0;i<5;i++)

    {
        iloczyn = iloczyn * A[i];
    }

    cout<<pow(iloczyn,1/5.0);





    return 0;
}


