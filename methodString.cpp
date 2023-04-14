#include <iostream>
#include <string>

using namespace std;

// str.substr(x, y)
// str.find(s)
// str.erase(x, n)
// str.replace(x, n, s)
// str.compare(s)
// str.insert(x, s)
// str.length(), str.size()

int main(int argc, char const *argv[])
{
    // string str = "01234";
    // string str1 = str.substr(2, 3);
    // string str1 = str.substr(2); // cat toi cuoi

    // string str = "abcd";
    // cout << str.find("cd");

    // cout << str1;

    // string str = "abcd";
    // str.erase(2, 2);

    // cout << str;

    // string str = "abcd";
    // str.replace(1, 2, "***");

    // cout << str;

    // string str1 = "abcd";
    // string str2 = "abcde";

    // cout << str1.compare(str2);

    string str = "abcd";
    str.insert(1, "**");

    cout << str;

    return 0;
}
