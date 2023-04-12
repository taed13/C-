#include <iostream>
using namespace std;

// Bài 1: Nhập vào 2 số a và b. Bạn hãy in ra màn hình tổng và hiệu của 2 số đó.
void bai1(int a, int b)
{
    cout << "a "
         << "+"
         << " b = " << a + b << endl;

    cout << "a "
         << "-"
         << " b = " << a - b << endl;
}

// Bài 2: Nhập vào 1 chữ cái viết thường bất kì. Hãy in ra màn hình chữ cái đó dưới dạng viết hoa.
void bai2(char c)
{
    cout << "Chu cai viet hoa: " << (char)(c - 32) << endl;
}

// Bài 3: Nhập vào 2 số nguyên a và b. Hãy hoán đổi giá trị của 2 số đó và in ra màn hình.
void bai3(int a, int b)
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    int swap = a;
    a = b;
    b = swap;
    cout << "Gia tri cua a la " << a << endl;
    cout << "Gia tri cua b la " << b << endl;
}

// Bài 4: Nhập vào 2 số nguyên dương a và b (a và b không trùng giá trị).
//  Hãy in ra màn hình số nhỏ hơn (không dùng cấu trúc if else hoặc toán tử 3 ngôi).
void bai4(int a, int b)
{
    int result = (a - b) / abs(a - b);
    switch (result)
    {
    case 1:
        cout << "Gia tri nho hon la " << b << endl;
        break;
    default:
        cout << "Gia tri nho hon la " << a << endl;
        break;
    }
}

int main()
{

    int a, b;
    cin >> a;
    cin >> b;
    bai1(a, b);

    char c;
    cout << "Chu cai viet thuong: ";
    cin >> c;
    bai2(c);

    bai3(a, b);

    bai4(a, b);
    return 0;
}
