#include <iostream>
using namespace std;

int max2Num(int a, int b)
{
    return (a > b) ? a : b;
}

int max3Num(int a, int b, int c)
{
    return (a > max2Num(b, c)) ? a : max2Num(b, c);
}

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    cout << "Gia tri lon nhat la " << max3Num(a, b, c);
    return 0;
}
