#include <iostream>
#include <time.h>
using namespace std;
int main ()
{
    int n;
    int m;
    cin >>n>>m;
    int o = n+m;
    int *A;
    int *B;
    int *C;
    A=new int [n];
    B=new int [m];
    C=new int [o];
    srand(time(0));



    for (int i=0; i<n; i++)
    {
        *(A+i)=rand()%11;
    }

    cout << endl;
    cout << "Posortowana tablica A"<<endl;
   sort(A, A+n);

    for (int i=0; i<n; i++)
    {
        cout <<*(A+i)<< " ";
    }

    for (int i=0; i<m; i++)
    {
        *(B+i)=rand()%11;
    }
    cout << endl;
    sort(B,B+m);
    cout << "Posortowana tablica B" <<endl;
    for (int i=0; i<m; i++)
    {
        cout <<*(B+i)<< " ";
    }
    cout << endl;

    int i=0;
    int j=0;
    int k=0;
    for (; k<o;k++)
    {

        if(*(A+i)>*(B+j))
        {
            *(C+k)=*(B+j);
            j++;
        }
        else
        {
            *(C+k)=*(A+i);
            i++;
        }
        if (i>=n || j>=m)
        {
            k++;
            break;
        }
    }

    while(i<n)
    {
        *(C+k)=*(A+i);
        i++;
        k++;
    }
    while(j<m)
    {
        *(C+k)=*(B+j);
        j++;
        k++;
    }
    cout << "Tablica C" <<endl;
    for (int a=0; a<o; a++)
    {
        cout<< *(C+a) << " ";
    }



    delete []A;
    delete []B;
    delete []C;



return 0;


}

