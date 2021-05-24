#include <iostream>
using namespace std;
int main ()
{
    int n;
    int m;
    cin >>n>>m;
    int *A;
    int *B;
    int *C;
    A=new int [n];
    B=new int [m];
    C=new int [n+m];
    int zamiana;
    int schowek;
    for (int i=0; i<n; i++)
    {
        *(A+i)=rand()%101;
    }
    do
    {
        zamiana=0;
        for(int i=0; i!=n; i++)
        {
            if (*(A+i)>*(A+i+1))
            {
                zamiana = zamiana +1;
                schowek = *(A+i) ;
                *(A+i)=*(A+i+1);
                *(A+i+1) = schowek;
            }
        }
    }
    while (zamiana!=0);

    for (int i=0; i<m; i++)
    {
        *(B+i)=rand()%11;
    }
    do
    {
        zamiana=0;
        for(int i=0; i!=n; i++)
        {
            if (*(B+i)>*(B+i+1))
            {
                zamiana = zamiana +1;
                schowek = *(B+i) ;
                *(B+i)=*(B+i+1);
                *(B+i+1) = schowek;
            }
        }
    }
    while (zamiana!=0);

    for (int i=0, j=0;i<n||j<m;)
    {
        if (i == n) {
            *(C + i + j) = *(B + j++);
        } else if (j == m) {
            *(C + i + j) = *(A + i ++);
        }
        else {
            if (*(A + i) < *(B + i)) {
                *(C + i + j) = *(A + i++);
            } else
                *(C + i + j) = *(B + j++);
        }
    }

    for (int i=0; i<n+m; i++)
    {
        cout << *(C+i)<< " ";
    }



return 0;


}

