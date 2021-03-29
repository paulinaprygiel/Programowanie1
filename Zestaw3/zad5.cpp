#include <iostream>
int main ()
{

    int a, b, t, c;
    std:: cout << "Wprowadz dwie liczby naturalne";
    std:: cin >> a >> b;
    c=a*b;
    std:: cout << "Najmniejsza wspolna wielokrotnosc liczb "<< a <<" i "<< b << " to ";
    while (b)
    {
        t=b;
        b=a%b;
        a=t;
    }
    c /= a;
    std:: cout << c << std:: endl;


    return 0;
}
