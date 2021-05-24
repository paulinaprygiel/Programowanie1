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
    A=new int [n+1];
    B=new int [m+1];
    C=new int [n+m]+1;

    for (int i=0; i<n; i++) {
        *(A + i) = rand() % 11;
    }
    for (int i=0; i<m; i++) {

        *(B+i)=rand()%11;
    }
    for (int i=0; i<n+m; i++) {
        *(C+i)=0;
    }

    for (int i=0;i<=n;i++) {
        for (int j = 0; j <= m; j++) {

            *(C + i + j) += *(A + i) **(B + j);

        }
    }

    for (int i=0; i<n+m; i++)
    {
        cout << *(C+i)<< " ";
    }



    return 0;


}

