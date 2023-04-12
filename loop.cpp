#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 10; i += 2)
    {
        cout << i << " ";
    }

    cout << endl;
    int i = 1;
    while (i < 10)
    {
        cout << i << " ";
        i += 2;
    }
    i = 1;

    cout << endl;
    do
    {
        cout << i << " ";
        i += 2;
    } while (i < 10);

    return 0;
}
