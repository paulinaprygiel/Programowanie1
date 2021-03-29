#include <iostream>
#include <cstdlib>
#include <time.h>
int main() {
    int l, n;
    int x = 0;
    srand(time(NULL));
    l = rand() % 100 + 1;

    while (n != l) {
        x++;
        std::cout << " Zgadnij wylosowana liczbe: " << "(to twoja " << x << " proba)" << std::endl;
        std::cin >> n;
        if (n == l)
            std::cout << " Udalo Ci sie odgadnac liczbe! " << "Wygrywasz w " << x << " probie" << std::endl;
        if (n > l)
            std::cout << " Szukana liczba jest mniejsza " << std::endl;
        else if (n < l)
            std::cout << " Szukana liczba jest wieksza" << std::endl;

        if (x == 10)
        { std::cout << " Nie udalo ci sie odgadnac liczby w 10 probach :( ";
         std:: cout << "szukana liczba to " << l;
            break;


        }
    }


        return 0;

}