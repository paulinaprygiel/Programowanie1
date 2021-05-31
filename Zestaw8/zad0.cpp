#include <iostream>
using namespace std;
bool fun (int a, int b)
{
    int suma_a=0;
    int suma_b=0;
    for (int i=1; i<=a/2;i++)
    {
        if (a%i==0)
        {
            suma_a +=i;
        }
    }

    for (int j=1; j<=b/2;j++)
    {
        if (b%j==0)
        {
            suma_b +=j;
        }
    }

    if (suma_a==b && suma_b == a)
    {
        return true;
    }
    else {
        return false;
    }


}
int main () {
    int a;
    int b;
    cin >> a >> b;
    cout << fun(a, b);
    return 0;

}