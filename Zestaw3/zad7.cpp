#include <iostream>

int main()
{

    int b, i, j, f;

    std:: cout << "wprowadz n";
    std:: cin >> b;


    for (i = 1; i <= b; i++) {

        if (i == 1 || i == 0)
            continue;


        f = 1;

        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0)
            {
                f = 0;
                break;
            }
        }


        if (f == 1)
            std:: cout << i << " ";
    }

    return 0;
}

