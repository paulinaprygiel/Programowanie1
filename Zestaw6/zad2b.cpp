//
// Created by Paulina Prygiel on 20/04/2021.
//
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
int rozmiar;

cout<<"Podaj rozmiar tablicy: ";
cin>>rozmiar;

cout<<endl;

srand(time(NULL));

int* tab;

tab = new int [rozmiar];

int* p = tab; // tak zeby tab byl nieruszony

for(int i=0;i<rozmiar;i++)
{
*p = rand()%11;
cout<<*p<<' ';
p++;
}
cout<<endl;

p = tab; // ustawim wskaznik znowu na poczatek



for(int j=0;j<=(rozmiar/2);j++)
{
int tmp = *(p+j);
*(p+j) = *(p + rozmiar - 1 -j);

*(p + rozmiar - 1 -j) = tmp;




}

p = tab;

for(int j=0;j<rozmiar;j++)
{
cout<<*p<<' ';
p++;
}





return 0;
}
