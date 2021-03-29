
#include <iostream>

float x, y, z;

int main()
{
    std:: cout << "Podaj pierwsza liczbe" << std:: endl;
    std:: cin >> x;

    std:: cout << "Podaj druga liczbe" << std:: endl;
    std:: cin >> y;

    std:: cout << "Podaj trzecia liczbe" << std:: endl;
    std:: cin >> z;

    if ((x<=y)&&(y<=z))

        std:: cout <<"Liczby sa ulozone w porzadku niemalejacym";


    else

        std:: cout<<"Liczby nie sa ulozone w porzadku niemalejacym";


    return 0;
}
