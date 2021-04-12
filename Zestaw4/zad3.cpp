

#include <iostream>


    int main()
    {
        int A[5],B[5];
        int n;
        std::cout<<"Przed przesunieciem: \n";
        for(int i=0;i<5;i++)
        {
            A[i]=2*i+1;
            std::cout<<"A["<<i<<"]="<<A[i]<<" ";
            B[i]=A[i];
        }
        std::cout<<"\nPodaj o ile pol w prawo przesunac elementy tablicy: ";
        std::cin>>n;
        for(int j=0;j<5;j++)
        {
            A[(n+j)%5]=B[j];
        }
        std::cout<<"Po przesunieciu: \n";
        for(int i=0;i<5;i++)
        {
            std::cout<<"A["<<i<<"]="<<A[i]<<" ";
        }
    return 0;
    }







