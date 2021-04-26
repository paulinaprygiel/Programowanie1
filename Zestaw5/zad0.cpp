#include<iostream>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int n = 7; //wiersze
    int m = 7; //columny
    int a[n][m];


    for( int i = 0; i < n; ++i)
    {for(int j = 0;  j < m; ++j)
        {a[i][j] = rand()%21-10;}
    }

    for(int i = 0; i < n; ++i)
    {for(int j = 0; j < m; ++j)
            std::cout<<a[i][j]<<'\t';
        std::cout<<'\n';
    }
    return 0;
}

