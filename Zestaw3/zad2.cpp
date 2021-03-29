#include<iostream>

int main()
{


    int n;
    int silnia = 1;
    std:: cout << "Podaj liczbe calkowita";
    std:: cin >> n;



        for (int i = n; i > 1; i--) {

            silnia *= i;

        }
        std::cout <<"Silnia liczby "<< n <<" jest rowna " << silnia << std::endl;


    return 0;
}



