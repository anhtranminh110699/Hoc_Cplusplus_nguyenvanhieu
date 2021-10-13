#include <iostream>

int main()
{
    //===In ra n lan "Lap trinh ko kho!".===
    /*int n;
    std::cout << "Nhap vao so lan in ra: ";
    std::cin >> n;
    for (int i=0;i<n;i++)
    {
        std::cout << "Lap trinh ko kho!" << std::endl;
    }*/
    //===Bai toan tinh tong tu a den b.===
    int a, b;
    int sum = 0;
    std::cout << "Nhap vao so a va b: ";
    std::cin >> a >> b;
    for (int i=a;i<=b;i++)
    {
        sum += i;
    }
    std::cout << "Tong cac so tu " << a << " den " << b << " la: " << sum << std::endl;
    
    return 0;
}