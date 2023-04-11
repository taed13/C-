#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int main_var = 0;
    cout << main_var << endl;

    {
        int scope_var1 = 1;
        cout << scope_var1 << endl;

        {
            cout << scope_var1 << endl;
        }
    }

    {
        int scope_var2 = 2;
        cout << scope_var2 << endl;
        // cout << scope_var1 << endl; // identifier "scope_var1" is undefinedC/C++(20)
    }
    return 0;
}
