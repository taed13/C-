#include <iostream>
using namespace std;

int main()
{
    int days, hours, minutes, seconds;
    cin >> days >> hours >> minutes >> seconds;

    cout << days * 24 * 60 * 60 + hours * 60 * 60 + minutes * 60 + seconds;
    return 0;
}
