#include <iostream>
#include <string>
using namespace std;
string first (string slowo1, string slowo2)
{
 if(slowo1<slowo2)
        {
            return slowo1;
        }
        if(slowo2<slowo1)
        {
            return slowo2;
        }


}
int main()
{
    string slowo1;
    string slowo2;
    cin >> slowo1;
    cin >> slowo2;
   cout<<  first (slowo1, slowo2);
    return 0;
}



