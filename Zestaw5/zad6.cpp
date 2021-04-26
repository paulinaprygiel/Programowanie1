//
// Created by Paulina Prygiel on 12/04/2021.
//
#include<iostream>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    const int n = 20;
    const int m = 20;
    const int o = 3;
    int a[n][m][o];


    for( int i = 0; i < n; ++i){
        for(int j = 0;  j < m; ++j){
            for (int k = 0; k < o; ++k){
                a[i][j][k] = rand() %256;
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < o; ++k) {

                std::cout << "a["<< i << "][" << j << "][" << k <<"] = "<< a[i][j][k] << std:: endl;

            }
        }
    }
    return 0;
}



