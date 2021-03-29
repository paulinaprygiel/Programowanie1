#include<iostream>
#include<cmath>

int main(){
    double x1,y1,x2,y2,r1,r2,o;

    std:: cout<<"podaj wspolrzedna x1:";
    std:: cin>>x1;

    std:: cout<<"podaj wspolrzedna y1:";
    std:: cin>>y1;

    std:: cout<<"podaj dlugosc r1:";
    std:: cin>>r1;
    if (r1<0)
    {
        std:: cout<<"promien nie moze byc ujemny";
        return (1);

    }

    std:: cout<<"podaj wspolrzedna x2:";
    std:: cin>>x2;

    std:: cout<<"podaj wspolrzedna y2:";
    std:: cin>>y2;

    std:: cout<<"podaj dlugosc r2:";
    std:: cin>>r2;
    if (r2<0)
    {
        std:: cout<<"promien nie moze byc ujemny";
        return (2);
    }

    o = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    if((o<=r1+r2))
    {
        std:: cout<<"kola maja niepuste przeciecie";
    }else
    {
        std:: cout<<"kola maja puste przeciecie";
    }

    return 0;

}
