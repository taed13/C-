#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Bài 1: Tạo mảng động có n phần tử nguyên (tối đa 10 phần tử).
// Nhập vào 1 số nguyên x và thêm x vào cuối mảng vừa tạo.
// Ví dụ:

// n = 4
// Nhap mang: 1 2 3 4
// x = 5
// Mang sau khi them: 1 2 3 4 5

void output(int *arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void add_element_into_end_array(int *arr, int &n, int x)
{
    arr[n] = x;
    n++;
    cout << "Mang sau khi them: ";
    output(arr, n);
}

// Bài 2: Tạo mảng động có n phần tử nguyên (tối đa 10 phần tử).
// Nhập vào 1 số nguyên dương x (0 <= x <= 9) và xóa phần tử ở vị trí x.
// Ví dụ:

// n = 4
// Nhap mang: 1 2 3 4
// x = 1
// Mang sau khi xoa: 1 3 4
void remove_element_at_position_x(int *arr, int &n, int x)
{
    for (int i = x; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Mang sau khi xoa: ";
    output(arr, n);
}

// Bài 3: Tạo mảng động có n phần tử nguyên (tối đa 10 phần tử).
// Nhập vào 1 số nguyên dương x (0 <= x <= 9) và số nguyên y.
// Thêm y vào vị trí x của mảng.
// Ví dụ:
// n = 4
// Nhap mang: 1 2 3 4
// y = 7
// x = 1
// Mang sau khi them: 1 7 2 3 4

void add_y_into_x_position_of_array(int *arr, int &n, int x)
{
    int y;
    cout << "y = ";
    cin >> y;

    for (int i = n; i >= x; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[x] = y;
    n++;
    cout << "Mang sau khi them: ";
    output(arr, n);
}

// Bài 4: Tạo mảng động có n phần tử nguyên (tối đa 10 phần tử).
// Sắp xếp lại mảng đó theo thứ tự tăng dần và in ra màn hình.
// Ví dụ:

// n = 4
// Nhap mang: 4 3 2 1
// Mang sau khi sap xep: 1 2 3 4

void sort_array_increase(int *arr, int &n)
{
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "mang sau khi sap xep: ";
    output(arr, n);
}

int main()
{
    int *arr = new int[10];
    int x, n;

    cout << "n = ";
    cin >> n;

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "x = ";
    cin >> x;

    // add_element_into_end_array(arr, n, x);
    // remove_element_at_position_x(arr, n, x);
    // add_y_into_x_position_of_array(arr, n, x);
    sort_array_increase(arr, n);

    delete[] arr;
    return 0;
}
