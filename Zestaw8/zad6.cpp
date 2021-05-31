#include <iostream>
using namespace std;
long long factorial (int n)
{
    int silnia =1;
    for(int i=n;i>1;i=i-2)
        silnia*=i;
    return silnia;

}

int main ()
{
    int n;
    cin >> n;
    cout <<factorial (n);
    return 0;
}