#include <iostream>

int main()
{

    int n; //liczba liczb pierwszych

    std:: cout << "wprowadz n";
    std:: cin >> n;
    if (n==1)
        std:: cout << 2;
    else
    {
        --n;
        std::cout<<2<<"\n";
        for (int i=3; n>0; i+=2)
        {
            bool prime=true;

            for (int j=2; j*j<=i; j++)
                if (i%j==0)
                {
                    prime=false;
                    break;
                }
            if(prime)
            {
                std:: cout<<i<<"\n";
                --n;
            }
        }
    }


    return 0;
}

