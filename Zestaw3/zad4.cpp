#include <iostream>
int main ()
{
    int a,b,c;
    std:: cout << "Podaj dwie liczby naturalne";
    std:: cin>>a>>b;
    std:: cout<<"Najwiekszym wspolnym dzielnikiem " << a << " oraz " << b << " jest ";

    while (b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    std:: cout << a;

    return 0;
}

