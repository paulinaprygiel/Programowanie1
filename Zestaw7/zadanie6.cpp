#include <iostream>

using namespace std;
int main()
{
    char text1[] = {'a', 'b', 'c', 'c', 'd', 'e'};
    char text2[] = {'c', 'd'};
    int length1 = sizeof(text1) / sizeof(text1[0]);
    int length2 = sizeof(text2) / sizeof(text2[0]);
    int ctr;

    int j=0;

    for (int i=0;i<=length1;i++)
    {


        if ((text1[i] != text2[j]) && (ctr != length2))
        {
            j=0;
            ctr=0;
        }


       if (text1[i] == text2[j])
       {

           j++;
           ctr++;
            if (ctr == length2)
            {
                cout << "tak zawiera sie";
                break;
            }

        }


    }
    if (ctr != length2)
        cout << "nie";
    return 0;



}