#include <iostream>
int main()
{
    int n;
    std:: cout << "Podaj liczbe calkowita";
    std:: cin >> n;
    std:: cout << "Dzielnikami liczby "<< n << " sa "<< std:: endl;
    for (int i = n; i > 0; i--)
    {
        if (n%i==0)

            std:: cout << n/i<< std:: endl;
    }

    return 0;
}
