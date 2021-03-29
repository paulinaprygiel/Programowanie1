//
// Created by Paulina Prygiel on 29/03/2021.
//
#include <iostream>



int main()
{
    float p;
    std:: cout << "Podaj liczbe uzyskanych punktow" << std:: endl;
    std:: cin >> p;
    if ((p<0)||(p>100))
    {
        std:: cout <<"niemozliwa liczba punktow do uzyskania";
    }
    else if (p<50)
    {
        std:: cout <<"ocena niedostateczna";
    }
    else if (p<60)
    {
        std:: cout<< "ocena dostateczna";
    }
    else if (p<70)
    {
        std:: cout<<"ocena dostateczna plus";
    }
    else if (p<80)
    {
        std:: cout<<"ocena dobra";
    }
    else if (p<90)
    {
        std:: cout<<"ocena dobra plus";
    }
    else
    {
        std:: cout<<"ocena bardzo dobra";
    }

    return 0;
}

