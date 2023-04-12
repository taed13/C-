#include <iostream>
using namespace std;

// Bài 1: Nhập 1 số nguyên dương n. In ra màn hình giá trị của S = 1 + 2 + 3 + ... + n.
int bai1(int n)
{
    int S = 0;
    for (int i = 1; i <= n; i++)
    {
        S += i;
    }
    return S;
}

// Bài 2: Nhập 1 số nguyên dương n. In ra màn hình giá trị của S = 1^2 + 2^2 + 3^2 + ... + n^2.
int bai2(int n)
{
    int S = 0;
    for (int i = 1; i <= n; i++)
    {
        S += i * i;
    }
    return S;
}

// Bài 3: Nhập 1 số nguyên dương n. In ra màn hình giai thừa n!.

int bai3(int n)
{
    int G = 1;
    for (int i = 1; i <= n; i++)
    {
        G *= i;
    }
    return G;
}

// Bài 4: Nhập vào 1 số nguyên dương n. In ra màn hình các số chia hết cho 5 từ 1 đến n.
void bai4(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            cout << i << " ";
            count++;
        }
    }
    if (!count)
    {
        cout << "Khong co so nao trong khoang tu 1 toi " << n << " chia het cho 5" << endl;
    }
}

int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout << "(Bai 1) - S = " << bai1(n) << endl;
    cout << "(Bai 2) - S = " << bai2(n) << endl;
    cout << "(Bai 3) - G = " << bai3(n) << endl;
    cout << "(Bai 4) - Sequence: ";
    bai4(n);
    return 0;
}
