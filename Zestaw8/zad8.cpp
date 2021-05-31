#include <iostream>
using namespace std;
int add (int x, int y)
{
    return x+y;
}
int multiply (int x, int y)
{
    return x*y;
}
int operation (int(*A)(int, int),int x,int y)
{
    return A(x,y);
}
int main ()
{
    char z;
    int a,b;
    cin >> z;
    cin >>a>>b;
    if (z=='+')
        cout << operation (add,a,b);
    else if (z=='*')
        cout << operation (multiply,a,b);
    return 0;

}