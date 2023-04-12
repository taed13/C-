#include <iostream>
using namespace std;

int main()
{
    float tong_tien, luong_co_ban;
    cin >> tong_tien >> luong_co_ban;

    float tien_thue;
    if (tong_tien <= luong_co_ban)
    {
        tien_thue = 0;
    }
    else
    {
        tien_thue = (tong_tien - luong_co_ban) * 0.1;
    }

    float thuc_linh = tong_tien - tien_thue;
    cout << "Thuc linh: " << thuc_linh;
    return 0;
}
