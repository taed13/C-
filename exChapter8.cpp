#include <iostream>
using namespace std;

// Bài 1: Viết chương trình nhập vào dữ liệu bán kính của 1 hình tròn.
// Tính và in ra màn hình chu vi và diện tích của hình tròn đó (sử dụng struct).
// Ví dụ:

// Nhap ban kinh: 3
// Chu vi hinh tron: 18.84
// Dien tich hinh tron: 28.26

#define PI 3.14

struct Circle
{
    float r;

    float permeter(float _r)
    {
        return 2 * PI * _r;
    }
    float circle_area(float _r)
    {
        return PI * r * r;
    }
    void output()
    {
        cout << "Chu vi hinh tron: " << permeter(r) << endl;
        cout << "Dien tich hinh tron: " << circle_area(r) << endl;
    }
    void intput()
    {
        cout << "Nhap ban kinh: ";
        cin >> r;
    }
};

int main()
{
    Circle *circle = new Circle;
    circle->intput();
    circle->output();

    delete circle;

    return 0;
}
