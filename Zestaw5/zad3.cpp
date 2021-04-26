#include<iostream>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int n =7;
    int m=7;
    int a[n][m];
    float sum = 0;

    for( int i = 0; i < n; ++i)
    {for(int j = 0;  j < m; ++j)
        {a[i][j] = rand()%20-10;}
    }

    for(int i = 0; i < n; ++i)
    {for(int j = 0; j < m; ++j)
            std::cout<<a[i][j]<<'\t';
        std::cout<<'\n';
    }


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            sum = sum + a[i][j];
        }
        std:: cout << "srednia w rzedzie "<< i+1 << " wynosi: " << (sum/n) << std:: endl;
        sum = 0;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            sum = sum + a[j][i];
        }
        std:: cout << "srednia w kolumnie "<< i+1 << " wynosi: " << (sum/m) <<std:: endl;
        sum = 0;
    }

    return 0;
}

