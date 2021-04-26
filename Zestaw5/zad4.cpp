#include<iostream>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int n = 7;
    int m = 7;
    int a[n][m];
    int b[m][n];


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
        for (int j=0; j < m; j++){
            b[j][i]=a[i][j];
    }
    std:: cout << "Macierz po stransponowaniu: "<< std:: endl;
    for (int i=0; i < m; i++)
        for (int j=0; j < n; j++){

            std:: cout << " "<< b[i][j];
            if (j==n-1)
                std:: cout<< std:: endl;
        }


    return 0;
}


