// Viết chương trình nhập vào lựa chọn (+, -, *, /) và 2 số nguyên từ bàn phím. Tính và hiển thị kết quả phụ thuộc vào lựa chọn như sau:

// Lựa chọn là '+' thì cộng hai số nguyên vừa nhập.
// Lựa chọn là '-' thì trừ hai số nguyên vừa nhập.
// Lựa chọn là '*' thì nhân hai số nguyên vừa nhập.
// Lựa chọn là '/' thì chia hai số nguyên vừa nhập.
// Nếu lựa chọn không hợp lệ thì hiển thị là "Lua chon khong hop le".

#include <iostream>
using namespace std;

int main()
{
    char lua_chon;
    int a, b;

    cin >> lua_chon;
    cin >> a >> b;

    switch (lua_chon)
    {
    case '+':
        cout << "Ket qua: " << a + b << endl;
        break;
    case '-':
        cout << "Ket qua: " << a - b << endl;
        break;
    case '*':
        cout << "Ket qua: " << a * b << endl;
        break;
    case '/':
        cout << "Ket qua: " << a / b << endl;
        break;
    default:
        cout << "Lua chon khong hop le" << endl;
        break;
    }
    return 0;
}
