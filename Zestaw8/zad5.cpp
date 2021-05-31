#include <iostream>
using namespace std;
long long factorial (int n)
{

if (n<2)
    return 1;
else
    return n*factorial(n-2);

}

int main ()
{
    int n;
    cin >> n;
    cout <<factorial (n);
    return 0;
}
