#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream fs;
    fs.open("test.txt", ios::in); // chi do file, ko the ghi file

    // string name;
    // getline(fs, name);

    // cout << name;

    if (!fs.is_open())
    {
        cout << "Khong mo duoc file";
        return 1;
    }

    fs.close();

    return 0;
}
