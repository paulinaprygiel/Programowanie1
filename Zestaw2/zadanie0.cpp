
#include <iostream>

int main()
{
    int x;
    std::cout << "Wprowadz liczbe";
    std::cin >> x;
    if (x%2==0)
    {
        std:: cout << "Liczba jest parzysta";
    }
    else
       std:: cout << "Liczba jest nieparzysta";
    return 0;
}
