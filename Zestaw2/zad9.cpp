#include <iostream>
float t1, t2, m, z, x ;
int main()
{
    std:: cout << "Podaj obecny kurs t" << std:: endl;
    std:: cin>> t1;

    std:: cout << "Podaj przewidywany kurs t za godzine" << std:: endl;
    std:: cin>> t2;

    std:: cout << "Podaj swoj kapital" << std:: endl;
    std:: cin>> m;
    x = t2-t1;

    if (x>0)
    {
        z=m*x/t1;
        std:: cout << "zysk wyniesie "<<z;
    }

    else
    {
        std:: cout<< "nie oplaca sie inwestowac";
    }


    return 0;
}