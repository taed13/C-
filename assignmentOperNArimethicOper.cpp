#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 2;
    cout << b + a << endl;
    int c = a + b;
    cout << c << endl;

    float d = (float)a / b;
    cout << d << endl;

    b += a;
    cout << b << endl;
    cout << b-- << " " << --b << endl;

    int devid = 5 % 2;
    cout << devid << endl;
    return 0;
}
