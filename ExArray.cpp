#include <iostream>
using namespace std;

// Bài 1: Tao mang so nguyên duong có n phân tü (tôi da 10 phân tú).
// Nhãp vão 1 so nguyên duong x và thêm x vão cuôi máng vua tao.
void bai1()
{
    int numbers[20];
    int n, x;

    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << "Nhap x can them vao cuoi mang ";
    cin >> x;

    numbers[n] = x;
    n++;

    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;
}

// Bài 2: Tao mang so nguyên duong có n phân tu (toi da 10 phân túr).
// Nhãp vão 1 so nguyên duong x (0 < = x <= 9) và xóa phân tu o vi trí x.
void bai2()
{
    int numbers[20];
    int n = 0, x;

    while (true)
    {
        cout << "Nhap n: ";
        cin >> n;
        if (n <= 10)
        {
            break;
        }
        else
        {
            cout << "n <= 10 ? " << endl;
        }
    }

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    while (true)
    {
        cout << "Nhap x de xoa phan tu o vi tri x: ";
        cin >> x;
        if (x >= 0 && x <= 9)
        {
            break;
        }
        else
        {
            cout << "x nam trong doan[0, 9]" << endl;
        }
    }

    for (int i = x; i < n; i++)
    {
        numbers[i] = numbers[i + 1];
    }
    n--;

    cout << "Sau khi xoa phan tu o vi tri " << x << " khoi mang" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;
}

// Bai 3: Tao mang so nguyên duong có n phân tü (tôi da 10 phân tú).
//  Nhâp vão 1 so nguyên duong x (0 <= x <= 9) và so nguyên duong y.
// Thêm y vão vi tri x cúa máng.
void bai3()
{
    int numbers[20];
    int n = 0, x, y;

    while (true)
    {
        cout << "Nhap n: ";
        cin >> n;
        if (n <= 10)
        {
            break;
        }
        else
        {
            cout << "n <= 10 ? " << endl;
        }
    }

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    while (true)
    {
        cout << "Nhap x (vi tri x): ";
        cin >> x;
        if (x >= 0 && x <= 9)
        {
            break;
        }
        else
        {
            cout << "x nam trong doan[0, 9]" << endl;
        }
    }

    cout << "Nhap so nguyen duong y can them vao vi tri " << x << ": ";
    cin >> y;

    cout << "Mang truoc khi them: ";
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    for (int i = n; i >= x; i--)
    {
        numbers[i] = numbers[i - 1];
    }
    numbers[x] = y;
    n++;

    cout << "Mang sau khi them: ";
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;
}

int main()
{
    // bai1();
    // bai2();
    bai3();
    return 0;
}
