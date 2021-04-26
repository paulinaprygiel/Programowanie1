#include<iostream>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int n = 7;
    int m = 7;
    int a[n][m];


    for( int i = 0; i < n; ++i)
    {for(int j = 0;  j < m; ++j)
        {a[i][j] = rand()%20-10;}
    }

    for(int i = 0; i < n; ++i)
    {for(int j = 0; j < m; ++j)
            std::cout<<a[i][j]<<'\t';
        std::cout<<'\n';
    }

    for (int i=0; i < n; i++)
        for (int j=i+1; j < m; j++){
            int x = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=x;
    }
    std:: cout << "Macierz po stransponowaniu: "<< std:: endl;
    for (int i=0; i < m; i++)
    {for (int j=0; j < n; j++)

            std:: cout<< a[i][j]<<'\t';
    std:: cout<<'\n';

        }


    return 0;
}


