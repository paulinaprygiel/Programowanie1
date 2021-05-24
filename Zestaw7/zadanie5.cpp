#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    srand(time(0));
    int X;
    int Y;
    int Z;
    cin>>X>>Y>>Z;

    int ***A = new int**[X];
    for(int i =0; i<X; i++){
        *(A+i) = new int*[Y];
        for(int j =0; j<Y; j++){
            *(*(A+i)+j) = new int[Z];
            for(int k = 0; k<Z;k++){
                *(*(*(A+i)+j)+k) = rand() %256;
            }
        }
    }
    for(int i = 0; i < X; ++i) {
        for (int j = 0; j < Y; ++j) {
            for (int k = 0; k < Z; ++k) {

                std::cout << "A["<< i << "][" << j << "][" << k <<"] = "<<  *(*(*(A+i)+j)+k) << std:: endl;

            }
        }
    }


    for(int i = 0; i < X; ++i) {
    for (int j = 0; j < Y; ++j) {
            delete []  *(*(A+i)+j);
        }
    
    }

    for(int i = 0; i < X; ++i) {
        delete[]  *(A + i);
    }

    delete[] A;
    return 0;
}
