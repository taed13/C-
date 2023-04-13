// Bài 1: Viết chương trình giải phương trình bậc nhất một ẩn ax + b = 0, trong đó a và b là các hệ số nhập từ bàn phím.
// Gợi ý:

// Nếu a = 0 và b = 0 thì phương trình có vô số nghiệm.
// Nếu a = 0 và b != 0 thì phương trình vô nghiệm.
// Nếu a != 0 thì phương trình có nghiệm duy nhất x = -b / a.

#include <iostream>
using namespace std;

void FDE(int a, int b)
{
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Phuong trinh vo so nghiem." << endl;
        }
        else
        {
            cout << "Phuong trinh vo nghiem." << endl;
        }
    }
    else
    {
        cout << "Phuong trinh co nghiem duy nhat x = " << (float)-b / a << endl;
    }
}

// Bài 2: Viết chương trình nhập vào số nguyên dương n (n <= 100). Tính và hiển thị tổng các số tự nhiên lẻ từ 1 đến n.

int bai2(int n)
{
    int count = 0;
    for (int i = i; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            count += i;
        }
    }
    return count;
}

// Bài 3: Viết chương trình nhập nhiệt độ F từ bàn phím rồi tính và hiển thị nhiệt độ đó ở độ C
// Gợi ý:
// degC = (degF - 32) / 1.8
// F = 80
// C = 26.6667

float combine_degree(float degF)
{
    return (degF - 32) / 1.8;
}

// Bài 4: Viết chương trình nhập vào một số n từ bàn phím. Hãy kiểm tra xem n có phải số nguyên tố hay không.
// Gợi ý:
// Số nguyên tố là số chỉ chia hết cho 1 và chính nó.
bool prime_number(int n)
{
    bool isPrime = true;
    for (int i = 1; i <= n / 2; i++)
    {
        if (i != 1 && n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    FDE(a, b);

    int n;
    cout << "n = ";
    cin >> n;
    cout << "Ket qua la " << bai2(n) << endl;

    float F;
    cout << "F = ";
    cin >> F;
    cout << "C = " << combine_degree(F) << endl;

    int prime_number_check;
    cout << "check prime number = ";
    cin >> prime_number_check;

    if (prime_number(prime_number_check))
    {
        cout << "n la so nguyen to" << endl;
    }
    else
    {
        cout << "n khong phai la so nguyen to" << endl;
    }

    return 0;
}
