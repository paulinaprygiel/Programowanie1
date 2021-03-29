#include <iostream>
int main ()
{

    int i,n,p;
    std:: cout << "Wprowadz liczbe calkowita";
    std:: cin >> n;
    if (n==0||n==1)
        p = 0;

    {
        for (i=2; i <= n/2; i++)
        {
            if (n% i == 0) {
                p = 0;
                break;
            }
        }
    }
    if (p != 0)
        std:: cout << n << " jest licza pierwsza";
    else
        std:: cout << n << " nie jest liczba pierwsza";


    return 0;
}


