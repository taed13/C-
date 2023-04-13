#include <iostream>

using namespace std;

int main()
{
    int n;
    char characters[10];
    int characters_remake[10];

    cin >> n;

    // Viết code ở đây
    for (int i = 0; i < n; i++)
    {
        cin >> characters[i];
        characters_remake[i] = (int)characters[i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (characters_remake[j] > characters_remake[j + 1])
            {
                int swap = characters_remake[j];
                characters_remake[j] = characters_remake[j + 1];
                characters_remake[j + 1] = swap;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << (char)characters_remake[i] << " ";
    }

    return 0;
}
