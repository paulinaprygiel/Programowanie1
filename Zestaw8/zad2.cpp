#include <iostream>
#include <cmath>
using namespace std;
int area (int a)
{
    int area;
    area = a*a;
    return area;
}
int area (int a, int b)
{
    int area;
    area = a*b;
    return area;
}
double area (double r)
{
    double area;
    double pi = 3.141592653589;
    area = r*r*pi;
    return area;
}
int main ()
{
    int a = 8;
    int b = 10;
    double r = 4;
    cout << area (a)<< endl;
    cout << area (a,b)<<endl;
    cout << area (r)<<endl;


}
