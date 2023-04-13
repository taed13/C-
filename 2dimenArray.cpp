#include <iostream>
using namespace std;

// Bài 1: Viết chương trình nhập vào 2 số nguyên dương n và m (0 < n <= 10, 0 < m <= 10).
// Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột. Tính và in ra màn hình tổng các phần tử có trong mảng.
// Ví dụ:
// n = 2
// m = 3
// Nhap mang:
// 1 2 3
// 4 5 6
// Tong cac phan tu trong mang la: 21
void bai1()
{
    int n, m, count = 0;
    int numbers[100][100];

    while (true)
    {
        cout << "Nhap n hang: ";
        cin >> n;
        if (n >= 0 && n <= 10)
        {
            break;
        }
        else
        {
            cout << "n nam trong doan[0, 10]" << endl;
        }
    }

    while (true)
    {
        cout << "Nhap m cot: ";
        cin >> m;
        if (m >= 0 && m <= 10)
        {
            break;
        }
        else
        {
            cout << "m nam trong doan[0, 10]" << endl;
        }
    }

    cout << "Nhap mang voi " << n << " hang va " << m << " cot: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> numbers[i][j];
            count += numbers[i][j];
        }
    }

    cout << "Tong cac phan tu trong mang la: " << count;
}

// Bài 2: Viết chương trình nhập vào số nguyên dương n (0 < n <= 10).
// Tạo mảng 1 chiều có n phần tử là số nguyên và in ra màn hình phần tử có giá trị lớn nhất.
// Ví dụ:
// n = 3
// Nhap mang: 1 3 2
// Gia tri lon nhat la: 3
void bai2()
{
    int n, max;
    int numbers[100];

    while (true)
    {
        cout << "Nhap n phan tu: ";
        cin >> n;
        if (n >= 0 && n <= 10)
        {
            break;
        }
        else
        {
            cout << "n nam trong doan[0, 10]" << endl;
        }
    }
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    max = numbers[0];
    for (int i = 1; i < n; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    cout << "Gia tri lon nhat la: " << max;
}

// Bài 3: Viết chương trình nhập vào 2 số nguyên dương n và m (0 < n <= 10, 0 < m <= 10).
// Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột. In ra màn hình các phần tử lớn nhất của các hàng.
// Ví dụ:
// n = 2
// m = 3
// Nhap mang:
// 1 2 3
// 4 6 5
// Cac phan tu lon nhat la: 3 6

void bai3()
{
    int n, m;
    int numbers[100][100], max1Row[10];

    while (true)
    {
        cout << "Nhap n hang: ";
        cin >> n;
        if (n >= 0 && n <= 10)
        {
            break;
        }
        else
        {
            cout << "n nam trong doan[0, 10]" << endl;
        }
    }

    while (true)
    {
        cout << "Nhap m cot: ";
        cin >> m;
        if (m >= 0 && m <= 10)
        {
            break;
        }
        else
        {
            cout << "m nam trong doan[0, 10]" << endl;
        }
    }

    cout << "Nhap mang voi " << n << " hang va " << m << " cot: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> numbers[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        max1Row[i] = numbers[i][0];
    }

    cout << "Cac phan tu lon nhat la: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (numbers[i][j] > max1Row[i])
            {
                max1Row[i] = numbers[i][j];
            }
        }

        cout << max1Row[i] << " ";
    }
}

// Bài 4: Viết chương trình nhập vào 2 số nguyên dương n và m (2 <= n <= 10, 2 <= m <= 10).
// Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột. Tính tổng các giá trị biên của mảng vừa tạo.
// Ví dụ:
// n = 3
// m = 3
// Nhap mang:
// 1 2 3
// 4 5 6
// 7 8 9
// Tong cac gia tri bien la: 40

void bai4()
{
    int n, m;
    int numbers[100][100];

    while (true)
    {
        cout << "Nhap n hang: ";
        cin >> n;
        if (n >= 2 && n <= 10)
        {
            break;
        }
        else
        {
            cout << "n nam trong doan[2, 10]" << endl;
        }
    }

    while (true)
    {
        cout << "Nhap m cot: ";
        cin >> m;
        if (m >= 2 && m <= 10)
        {
            break;
        }
        else
        {
            cout << "m nam trong doan[2, 10]" << endl;
        }
    }

    cout << "Nhap mang voi " << n << " hang va " << m << " cot: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> numbers[i][j];
        }
    }

    int borderNum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || i == (n - 1))
            {
                borderNum += numbers[i][j];
            }
            else if (j == 0 || j == (m - 1))
            {
                borderNum += numbers[i][j];
            }
        }
    }

    cout << "Tong cac gia tri bien la: " << borderNum;
}

int main()
{
    // bai1();
    // bai2();
    // bai3();
    bai4();
    return 0;
}
