#include <iostream>
#include <time.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int tmp;
    int *p_tmp = &tmp;
    int *A;
    int *B;
    A=new int [n];
    B=new int [n];
    srand(time(NULL));
    for (int i=0; i<n;i++)
    {
        *(A+i)=rand()%11;
        *(B+i)=rand()%11;
    }
    for (int i=0; i<n; i++)
    {
        cout << *(A+i)<<" ";
    }
    cout << endl;
    for (int i=0; i<n; i++)
    {
        cout << *(B+i)<<" ";
    }
    cout << endl;
    for (int i=0; i<n; i++)
    {
        *p_tmp = *(A+i);
        *(A+i)= *(B+i);
        *(B+i)= *p_tmp;
    }
    for (int i=0; i<n; i++)
    {
        cout << *(A+i)<<" ";
    }
    cout << endl;
    for (int i=0; i<n; i++)
    {
        cout << *(B+i)<<" ";
    }
    delete []A;
    delete []B;

return 0;
}