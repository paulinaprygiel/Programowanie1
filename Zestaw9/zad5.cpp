#include <iostream>
#include <string>
using namespace std;
string filter(string slowo1, char k)
    {
        string slowo2 = "";
        for(int i=0; i < slowo1.length(); i++)
        {
            if(slowo1[i] != k)
            {
                slowo2 += slowo1[i];

            }


        }
        return slowo2;

}
int main()
{
    string slowo1;
    char znak;
    cin >> slowo1;
    cin >> znak;
    cout <<  filter (slowo1,znak );
    return 0;
}
