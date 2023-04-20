#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    int age;
    string address;

    Person() {}

    Person(string _name, int _age, string _address)
    {
        name = _name;
        age = _age;
        address = _address;
    }
};

int main()
{
    Person person1;

    person1.name = "Le Tien Dat";
    person1.age = 20;
    person1.address = "Thanh Hoa";

    cout << "Name: " << person1.name << endl;
    cout << "Tuoi: " << person1.age << endl;
    cout << "Dia chi: " << person1.address << endl;

    person1.works();
    return 0;
}
