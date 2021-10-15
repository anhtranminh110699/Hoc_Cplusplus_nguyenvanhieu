#include <iostream>
using namespace std;

int main()
{
    int *p, value;
    p = &value;
    value = 10;

    cout << "Gia tri cua bien value la: " << value << endl;
    cout << "Dia chi bien value la: " << &value << endl;
    cout << "Gia tri cua bien con tro la: " << p << endl;
    cout << "Dia chi cua bien con tro la: " << &p << endl;
    cout << "Gia tri cua bien ma con tro tro den la: " << *p << endl;

    cout << "----------------------------------------\n";

    cout << "Gia tri cua bien value la: " << value << endl;
    *p = 100;
    cout << "Gia tri cua bien value la: " << value << endl;
    cout << "Dia chi bien value la: " << &value << endl;
    cout << "Gia tri cua bien con tro la: " << p << endl;
    cout << "Dia chi cua bien con tro la: " << &p << endl;
    cout << "Gia tri cua bien ma con tro tro den la: " << *p << endl;

    cout << "----------------------------------------\n";

    value = 1000;
    cout << "Gia tri cua bien value la: " << value << endl;
    cout << "Dia chi bien value la: " << &value << endl;
    cout << "Gia tri cua bien con tro la: " << p << endl;
    cout << "Dia chi cua bien con tro la: " << &p << endl;
    cout << "Gia tri cua bien ma con tro tro den la: " << *p << endl;

    return 0;
}