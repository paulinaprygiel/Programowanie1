#include <iostream>
float a,b,c, x;
int main()
{
    std:: cout << "Podaj pierwsza liczbe" << std:: endl;
    std:: cin >> a;

    std:: cout << "Podaj druga liczbe" << std:: endl;
    std:: cin >> b;

    std:: cout << "Podaj trzecia liczbe" << std:: endl;
    std:: cin >> c;

    x=a;
    if(b<x)
        x=b;
    if(c<x)
        (x=c);
    std:: cout << "najmniejsza liczba to "<<x;

    return 0;
}

