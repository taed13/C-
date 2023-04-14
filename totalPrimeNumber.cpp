#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

// Hàm total_prime nhận vào 1 mảng số nguyên, số lượng phần tử của mảng và trả về tổng của các số nguyên tố có trong mảng,
// nếu không có số nguyên tố nào thì trả về 0.
int total_prime(int numbers[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_prime(numbers[i]))
        {
            count += numbers[i];
        }
    }
    return count;
}

int main()
{
    int n;
    int numbers[10];

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    std::cout << total_prime(numbers, n);

    return 0;
}
