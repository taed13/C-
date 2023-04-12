// Viết chương trình nhập vào lần lượt năm và tháng sau đó hiển thị ra màn hình
//  tổng số ngày trong tháng đó(nếu tháng nhỏ hơn 1 hoặc lớn hơn 12 thì hiển thị là "Thang khong hop le").
//     Lưu ý : tháng 2 của năm nhuận có 29 ngày.

#include <iostream>
using namespace std;

bool leapYear(int year)
{
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void daysOfMonth(int year, int month)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("Thang %d nam %d co 31 ngay", month, year);
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("Thang %d nam %d co 30 ngay", month, year);
    }
    else if (month == 2)
    {
        if (leapYear(year))
        {
            printf("Thang %d nam %d co 29 ngay", month, year);
        }
        else
        {
            printf("Thang %d nam %d co 28 ngay", month, year);
        }
    }
    else
    {
        cout << "Thang khong hop le";
    }
}

int main()
{
    int year, month;
    cin >> year >> month;

    daysOfMonth(year, month);

    return 0;
}
