#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    int tmp;

    int *p_a = &a;
    int *p_b = &b;
    int *p_tmp =&tmp;

    *p_tmp = *p_a;
    *p_a = *p_b;
    *p_b = *p_tmp;

    cout << "a=" << a << "  b=" <<b;

return 0;

}
