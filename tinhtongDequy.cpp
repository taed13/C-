#include <iostream>
using namespace std;

int queue(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return n + queue(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << queue(n);

    return 0;
}
