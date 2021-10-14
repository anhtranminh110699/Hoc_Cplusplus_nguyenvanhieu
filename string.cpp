#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Khai bao
    string brand;
    string first_name = "Anh";
    string last_name = "Tran Minh";

    //Khoi tao
    brand = "Lap trinh";

    //Noi chuoi
    brand = brand + " Khong kho";
    cout << first_name + " " + last_name << "\n";

    //ham Lay chieu dai
    cout << "Length = " << brand.length() << "\n";

    //ham sub string (Lay ky tu)
    //tham so 1 la vi tri lay, tham so 2 la so ky tu lay
    cout << "substr = " << brand.substr(0,3) << "\n";

    //index (truy cap thay doi phan tu cua chuoi)
    string str = "abcd";
    str[0] = 'A';
    cout << "str = " << str << "\n";

    //Nhap chuoi co khoang trang
    // cin >> str;
    // cout << "str = " << str << "\n";
    getline(cin,str);
    cout << "str = " << str << "\n";
    getline(cin,str);
    cout << "str = " << str << "\n";

    //ham Them phan tu vao cuoi chuoi
    //tham so 1 la so ky tu, tham so 2 la ky tu
    str = "abcd";
    cout << str.append(3,'m');

    return 0;
}