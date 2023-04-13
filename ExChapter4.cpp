
#include <iostream>

using namespace std;

// Bài 1: Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10).
// Nhập mảng có n số nguyên. Hãy sắp xếp lại mảng đó theo thứ tự giảm dần và in ra màn hình.
// Ví dụ:
// n = 4
// Nhap mang: 2 3 1 4 6
// Mang sau khi sap xep: 6 4 3 2 1
void bai1()
{
    int n, tmp;
    int numbers[10];

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

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (numbers[j] < numbers[j + 1])
            {
                tmp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }
}

// Bài 2: Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10).
// Nhập mảng có n số nguyên và nhập số nguyên k. Hãy kiểm tra xem trong mảng có xuất hiện 2 phần tử có tổng bằng k hay không,
// nếu có hãy in ra màn hình vị trí của 2 phần tử đó (lấy 2 vị trí đầu tiên tìm được).
// Ví dụ:
// n = 4
// Nhap mang: 1 2 3 4
// k = 3
// Ket qua: 0 1

void bai2()
{
    int n, k;
    int numbers[10];

    while (true)
    {
        cout << "Nhap n: ";
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
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    cin >> k;

    cout << "Ket qua: ";
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (k == numbers[i] || k == numbers[j])
            {
                continue;
            }
            else
            {
                if ((numbers[i] + numbers[j] == k))
                {
                    cout << i << " " << j;
                    break;
                }
            }
        }
    }
}

// Bài 3: Viết chương trình nhập vào 2 ma trận có n hàng và m cột (0 < n <= 10, 0 < m <= 10). In ra tổng của 2 ma trận.
// Gợi ý:
// Phép cộng 2 ma trận là việc cộng các phần tử có vị trí tương ứng của 2 ma trận đó
// Ví dụ:
// n = 2
// m = 3
// Nhap ma tran 1:
// 1 2 3
// 1 2 3
// Nhap ma tran 2:
// 2 3 4
// 2 3 4
// Tong 2 ma tran:
// 3 5 7
// 3 5 7
void bai3()
{
    int n, m;
    int numbers1[100][100];
    int numbers2[100][100];
    int remake_maxtrix[100][100];

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

    cout << "Nhap ma tran 1 voi " << n << " hang va " << m << " cot: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> numbers1[i][j];
        }
    }

    cout << "Nhap ma tran 2 voi " << n << " hang va " << m << " cot: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> numbers2[i][j];
        }
    }

    cout << "Tong 2 ma tran" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            remake_maxtrix[i][j] = numbers1[i][j] + numbers2[i][j];
            cout << remake_maxtrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Bài 4: Viết chương trình nhập vào 1 ma trận có n hàng và m cột (0 < n <= 10, 0 < m <= 10).
// In ra màn hình tổng của các số lẻ xuất hiện trong ma trận.
// Ví dụ:
// n = 2
// m = 3
// Nhap ma tran:
// 1 2 3
// 4 5 6
// Tong cac so le la: 9
void bai4()
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

    cout << "Nhap ma tran voi " << n << " hang va " << m << " cot: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> numbers[i][j];
            if (numbers[i][j] % 2 == 1)
            {
                count += numbers[i][j];
            }
        }
    }
    cout << "Tong cac so le la: " << count;
}

int main()
{
    // bai1();
    // bai2();
    // bai3();
    bai4();
    return 0;
}
