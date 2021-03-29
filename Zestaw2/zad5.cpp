#include <iostream>
float a, b, c;
int main()
{
    std:: cout << "Podaj dlugosc pierwszego boku" << std:: endl;
    std:: cin >> a;

    std:: cout << "Podaj dlugosc drugiego boku" << std:: endl;
    std:: cin >> b;

    std:: cout << "Podaj dlugosc trzeciego boku " << std:: endl;
    std:: cin >> c;

    if ((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        std:: cout <<"Z podanych bokow mozna skonstruowac trojkat";
    }

    else
    {
        std:: cout<<" Z podanych bokow nie mozna skonstruowac trojkata";
    }

    return 0;
}
