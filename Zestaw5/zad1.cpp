#include<iostream>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    const int n =7;
    const int m =7;
    int a[n][m];
    int sum = 0;

    for( int i = 0; i < n; ++i)
    {for( int j = 0;  j < m; ++j)
        {a[i][j] = rand()%21-10;}
    }

    for( int i = 0; i < n; ++i)
    {for( int j = 0; j < m; ++j)
            std::cout<<a[i][j]<<'\t';
        std::cout<<'\n';
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            sum += a[i][j];
        }


    }
    std::cout <<"Suma wynosi "<< sum << std::endl;
    return 0;
}