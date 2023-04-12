#include <iostream>
using namespace std;

int main()
{
    const int adult_age = 18;
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "chua du tuoi cong dan";
    }
    else
    {
        cout << "truong thanh roi";
    }

    return 0;
}
