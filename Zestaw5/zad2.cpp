//
// Created by Paulina Prygiel on 12/04/2021.
//wspolrzedne
#include<iostream>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int n =7;
    int m =7;
    int a[n][m];
    int max = 0;
    int w;
    int k;

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
            if (max < a[i][j])
            {
                max = a[i][j];
                w = i+1;
                k = j+1;
            }
        }
    }
    std:: cout<<"Najwieksza liczba w tablicy to "<<max<<std:: endl;
    std:: cout<<"Wspolrzedne: kolumna "<<k<<" wiersz "<<w<<std:: endl;
    return 0;
}


