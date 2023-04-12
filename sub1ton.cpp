#include <iostream>

int main()
{
    int n;
    int result = 0;

    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        result += i;
    }
    // Viết code ở đây

    std::cout << result;

    return 0;
}
