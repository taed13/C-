#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input_integer(string label, int &n);
bool is_prime(int n);
int sum_prime_2_to_n(int n);
unsigned long long factor(int n);

int main()
{
    int n;
    input_integer("n = ", n);
    if (is_prime(n))
    {
        cout << n << " la so nguyen to" << endl;
    }
    else
    {
        cout << n << " khong la so nguyen to" << endl;
    }

    cout << "Tong cac so nguyen to tu 2 toi " << n << " la: " << sum_prime_2_to_n(n) << endl;
    cout << "giai thua cua " << n << "! la: " << factor(n) << endl;
    return 0;
}

void input_integer(string label, int &n)
{
    cout << label;
    cin >> n;
}
bool is_prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int sum_prime_2_to_n(int n)
{
    if (n == 2)
    {
        return 2;
    }
    else
    {
        return is_prime(n) ? n + sum_prime_2_to_n(n - 1) : sum_prime_2_to_n(n - 1);
    }
}

unsigned long long factor(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factor(n - 1);
    }
}
