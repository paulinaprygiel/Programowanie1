#include<iostream>

int main()
{
    int a= 0; //pierwszy wyraz ciagu
    int b= 1; //drugi wyraz ciagu
    int c; //kolejne wyrazy ciagu
    int n; // liczba wyrazow ciagu
    std:: cout<<"Podaj n";
    std:: cin >> n;

    std:: cout<< a<< std:: endl;
    std:: cout<< b<< std:: endl;

for (int i=0; i<=n; i++) {
    c = a + b;
    std::cout << c<< std:: endl;
    a = b;
    b = c;
}

    return 0;
}






