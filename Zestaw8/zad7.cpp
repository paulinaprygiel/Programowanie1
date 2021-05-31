#include <iostream>
using namespace std;
void yes()
{
    cout << "yes";
}
void no()
{
    cout << "no";
}
void vote (void(*A)())
{
    A();
}
int main ()
{
    char z;
    cin >> z;
    if (z=='Y')
        vote(yes);
    else if (z=='N')
        vote(no);
    return 0;

}