#include <iostream>
int main ()
{

    int i,n;
    bool p = true;
    std:: cout << "Wprowadz liczbe calkowita";
    std:: cin >> n;
    if (n==0||n==1){
        p = false;
    }
    else
    {
        for (i=2; i <= n/2; i++)
        {
            if (n% i == 0) {
                p = false;
                break;
            }
        }
    }
    if (p)
        std:: cout << n << " jest licza pierwsza";
    else
        std:: cout << n << " nie jest liczba pierwsza";


    return 0;
}

