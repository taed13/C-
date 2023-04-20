#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Bài 2: Viết chương trình quản lý sản phẩm (tên, đơn giá, số lượng) gồm các chức năng sau:
// Xem danh sách sản phẩm
// Thêm sản phẩm mới
// Xóa sản phẩm

struct Product
{
    string name;
    int unitPrice;
    int quantity;

    Product() {}

    Product(string _name, int _unitPrice, int _quantity)
    {
        name = _name;
        unitPrice = _unitPrice;
        quantity = _quantity;
    }

    friend istream &operator>>(istream &is, Product &product)
    {
        cout << "You must add name, unit price and quantity..." << endl;

        cout << "Name: ";
        getline(is >> ws, product.name);

        cout << "Unit price: ";
        is >> product.unitPrice;

        cout << "Quantity: ";
        is >> product.quantity;

        return is;
    }

    friend ostream &operator<<(ostream &os, const Product &product)
    {
        os << "Name: " << product.name << ", Unit Price: " << product.unitPrice << ", Quantity: " << product.quantity << endl;
        return os;
    }
};

void view_product_list(Product *product, int n)
{
    if (n == 0)
    {
        cout << "Product list is empty." << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << product[i];
        }
    }
}

void print_menu()
{
    cout << "You wanna what?" << endl;
    cout << "1. View product list" << endl;
    cout << "2. Add new product" << endl;
    cout << "3. Remove product" << endl;
    cout << "4. Quit" << endl;
}

int main()
{
    int choice = 0;
    int n;
    Product *product = new Product[10];

    cout << "How many product do you wanna add into my system? ";
    cin >> n;
    int productCount = n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < n; i++)
    {
        cin >> product[i];
    }

    while (choice != 4)
    {
        print_menu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "There are products we have after you added: " << endl;
            view_product_list(product, productCount);
            break;

        case 2:
            if (productCount >= 10)
            {
                cout << "Product list is full." << endl;
            }
            else
            {
                cin >> product[productCount];
                productCount++;
                n = productCount;
            }
            break;
        case 3:
            if (productCount == 0)
            {
                cout << "Product list is empty." << endl;
            }
            else
            {
                cout << "Enter the index of the product to remove: ";
                int index;
                cin >> index;

                if (index < 0 || index >= productCount)
                {
                    cout << "Invalid index." << endl;
                }
                else
                {
                    for (int i = index; i < productCount - 1; i++)
                    {
                        product[i] = product[i + 1];
                    }
                    productCount--;
                }
            }
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    }

    delete[] product;

    return 0;
}
