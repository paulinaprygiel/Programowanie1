#include <iostream>
float x,y,z;
int main()
{
    std:: cout << "Podaj pierwsza liczbe" << std:: endl;
    std:: cin >> x;

    std:: cout << "Podaj druga liczbe" << std:: endl;
    std:: cin >> y;

    std:: cout << "Podaj trzecia liczbe" << std:: endl;
    std:: cin >> z;

    if ((x==y)||(x==z)||(y==z))
    {
        std:: cout <<"Przynajmniej dwie z podanych liczb sa sobie rowne";
    }

    else
    {
        std:: cout<<" Zadana z podanych liczb nie jest sobie rowna ";
    }

    return 0;
}


