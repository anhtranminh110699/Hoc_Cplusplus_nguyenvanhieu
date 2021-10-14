#include <iostream>
using namespace std;

int main()
{
    //===Su dung goto.===
    /*int lc;
    begin:
    cout << "==================\n";
    cout << "1. Lua chon 1!\n";
    cout << "2. Lua chon 2!\n";
    cout << "3. Lua chon 3!\n";
    cout << "0. Thoat\n";
    cout << "==================\n";
    cout << "Nhap lua chon ban muon: ";
    cin >> lc;
    switch(lc)
    {
        case 1: cout << "Ban da lua chon 1!\n";
                goto begin;
        case 2: cout << "Ban da lua chon 2!\n";
                goto begin;
        case 3: cout << "Ban da lua chon 3!\n";
                goto begin;
        case 0: cout << "Ban lua chon THOAT!\n";
                return 0;
                //break;
        default: cout << "Ban can chon dung so trong khoang!\n";
                 goto begin;
    }*/

    //===Su dung while(true) thay the cho cau lenh goto.===
    int lc;
    while (true)
    {
        cout << "==================\n";
        cout << "1. Lua chon 1!\n";
        cout << "2. Lua chon 2!\n";
        cout << "3. Lua chon 3!\n";
        cout << "0. Thoat\n";
        cout << "==================\n";
        cout << "Nhap lua chon ban muon: ";
        cin >> lc;
        switch(lc)
        {
            case 1: cout << "Ban da lua chon 1!\n";
                    break;
            case 2: cout << "Ban da lua chon 2!\n";
                    break;
            case 3: cout << "Ban da lua chon 3!\n";
                    break;
            case 0: cout << "Ban lua chon THOAT!\n";
                    return 0;
                    //break;
            default: cout << "Ban can chon dung so trong khoang!\n";
                    break;
        }
    }
    return 0;
}