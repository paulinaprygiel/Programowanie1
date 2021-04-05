#include <iostream>
int main()
{
    int n;
    std:: cout << "Podaj liczbe calkowita";
    std:: cin >> n;
    std:: cout << "Dzielnikami liczby "<< n << " sa "<< std:: endl;
    for (int i = 1; i <= n/2.0; i++)
    {
        int dzielnik = n/i;
        if (n%i==0)

            std:: cout << dzielnik <<std:: endl;
    }
    std:: cout <<1;

    return 0;
}

