#include <iostream>

using namespace std;

int total(int numbers[10][10], int m, int n)
{
    // Hãy hoàn thành hàm total
    // theo yêu cầu đề bài nhé
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count += numbers[i][j];
        }
    }
    return count;
}

int main()
{
    int numbers[10][10];
    int m, n;

    std::cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> numbers[i][j];
        }
    }

    std::cout << total(numbers, m, n);

    return 0;
}
