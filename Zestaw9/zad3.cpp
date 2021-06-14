#include <iostream>
#include <string>
using namespace std;
string con (string slowo1, string slowo2)
{
    string sum=slowo1+slowo2;
    cout << sum;
    return sum;
}
int main()
{
    string slowo1;
    string slowo2;
    cin >> slowo1;
    cin >> slowo2;
    con (slowo1, slowo2);
    return 0;
}

