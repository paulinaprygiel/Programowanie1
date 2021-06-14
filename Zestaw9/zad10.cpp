#include <iostream>
#include <string>

using namespace std;
string convert (string number)
{
    int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string result;
    if (number.front() >= '1' && number.front() <= '9') {
        int decimal_number = stoi(number);
        for (int i=0; i < 13; i++)
        {
            while (decimal_number % decimal[i] < decimal_number)
            {
                result += roman[i];
                decimal_number -= decimal[i];
            }


        }
    }
    else {
        int decimal_results = 0;
        for (int i = 0; i < 13; i++) {
            while (number.find(roman[i]) == 0) {
                decimal_results += decimal[i];
                number.erase(number.find_first_of(roman[i]), roman[i].length());
            }

        }
        result = to_string(decimal_results);
    }
    return result;
}
int main()
{
string slowo1;
    cout << convert(slowo1)<<endl;

    return 0;
}

