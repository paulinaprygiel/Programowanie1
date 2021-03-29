#include<iostream>
#include<cmath>
int main(){
    double a,b,c,d,D,x1,x2;

    std:: cout<<"podaj a:";
    std:: cin>>a;
    if (a==0)
    {
        std:: cout<< "a musi byc rozne od zera";
        return (1);
    }
    std:: cout<<"podaj b:";
    std:: cin>>b;
    std:: cout<<"podaj c:";
    std:: cin>>c;

    D = pow(b,2) - 4*a*c;
    d = sqrt(D);


    if(D>0)
    {

        x1 = (-b - d) / (2*a);
        x2 = (-b + d) / (2*a);

        std:: cout<<"x1= "<<x1<<std:: endl;
        std:: cout<<"x2= "<<x2<<std:: endl;
    }else if(D==0){
        x1 = -b /(2*a);
        std:: cout<<"x1:"<<x1;
    }else{
        std:: cout<<"to rownanie nie ma pierwiastkow:"<<std:: endl;
    }

    return 0;

}
