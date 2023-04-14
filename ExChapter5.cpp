#include <iostream>
#include <string>

using namespace std;

// Bài 1: Viết chương trình nhập vào 1 chuỗi gồm các ký tự từ a -> z và có thể chứa khoảng trắng.
// Hãy loại bỏ các khoảng trắng ở đầu và cuối chuỗi.
// Ví dụ:
// Nhap chuoi:     f8 fullstack
// Ket qua: f8 fullstack

void bai1()
{
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);

    str.erase(0, str.find_first_not_of(' '));
    str.erase(str.find_last_not_of(' ') + 1);

    cout << "Ket qua: " << str;
}

// Bài 2: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z và có thể chứa khoảng trắng.
// Hãy loại bỏ các khoảng trắng thừa ở giữa các từ.
// Ví dụ:
// Nhap chuoi: f8   fullstack
// Ket qua: f8 fullstack

// str.replace(x, n, s)

void bai2()
{
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);

    string result = "";
    bool previous_space = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            result += str[i];
            previous_space = false;
        }
        else if (!previous_space)
        {
            result += ' ';
            previous_space = true;
        }
    }

    if (result[result.length() - 1] == ' ')
    {
        result.erase(result.length() - 1);
    }

    cout << "Ket qua: " << result;
}

// Bài 3: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A -> Z và có thể chứa khoảng trắng.
// Hãy viết hoa các chữ cái ở đầu mỗi từ, các chữ cái còn lại để ở dạng viết thường.
// Ví dụ:
// Nhap chuoi: f8 fulLsTack
// Ket qua: F8 Fullstack

void bai3()
{
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }

    str[0] = toupper(str[0]);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str[i + 1] = toupper(str[i + 1]);
        }
    }

    cout << str;
}

// Bài 4: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A -> Z và có thể chưa khoảng trắng.
// Hãy chuẩn hóa chuỗi đó.
// Gợi ý:
// Loại bỏ khoảng trắng đầu cuối.
// Loại bỏ khoảng trắng thừa ở giữa các từ.
// Viết hoa chữ cái đầu, các chữ còn lại viết thường.

void bai4()
{
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);

    str.erase(0, str.find_first_not_of(' '));
    str.erase(str.find_last_not_of(' ') + 1);

    string result = "";
    bool previous_space = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            result += str[i];
            previous_space = false;
        }
        else if (!previous_space)
        {
            result += ' ';
            previous_space = true;
        }
    }

    if (result[result.length() - 1] == ' ')
    {
        result.erase(result.length() - 1);
    }

    for (int i = 0; i < result.length(); i++)
    {
        result[i] = tolower(result[i]);
    }

    result[0] = toupper(result[0]);

    for (int i = 0; i < result.length(); i++)
    {
        if (result[i] == ' ')
        {
            result[i + 1] = toupper(result[i + 1]);
        }
    }

    cout << result;
}

int main(int argc, char const *argv[])
{
    // bai1();
    // bai2();
    // bai3();
    bai4();
    return 0;
}
