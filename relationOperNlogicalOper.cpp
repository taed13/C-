#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 3;
    if (a < b)
    {
        cout << "a nho hon b" << endl;
    }
    else
    {
        cout << "a lon hon b" << endl;
    }
    if (a != b)
    {
        cout << "a khac b" << endl;
    }
    else
    {
        cout << "a giong b" << endl;
    }
    cout << "a || b = " << (a || b) << endl;
    cout << "a && b = " << (a && b) << endl;
    return 0;
}
