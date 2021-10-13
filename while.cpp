#include <iostream>
using namespace std;

#define MAX 1000

int main()
{
    //===Bai toan dem ngay chay.===
    /*int date_count = 1;
    while (date_count <= 21)
    {
        cout << "Ban di chay!\n";
        date_count++;
    }
    cout << "So ngay da chay la: " << date_count-1 << "\n";*/

    //===Bai toan dem ngay chay.===
    /*int date_count = 0;
    bool is_continue = true;
    while (is_continue == true)
    {
        date_count++;
        cout << "Ban di chay!\n";
        if (date_count>=21)
        {
            is_continue = false;
        }
        cout << "Ngay " << date_count << "\n";
    }
    cout << "So ngay da chay la: " << date_count-1 << "\n";
    //dem tu 0 nen nhu tren se ra 20
    cout << "So ngay da chay la: " << date_count << "\n";
    //ntn se ra dung 21*/

    //===Bai toan tim x min sao cho 1+2+3+...x>1000.===
    //Su dung 4 bien de thay duoc su khac va giong nhau o cac truong hop
    int tsum = 0, xsum = 0, ysum = 0, zsum = 0;
    int t = 0;
    int x = 0;
    int y = 1;
    int z = 1;
    while (tsum <= 1000)
    {
        tsum += t;
        t++;
    }
    cout << "Tong tu 1 den t la: " << tsum << "\n";
    cout << "t = " << t-1 << "\n";
    //cout << "t = " << t << "\n";

    while (xsum <= 1000)
    {

        x++;
        xsum += x;
    }
    cout << "Tong tu 1 den x la: " << xsum << "\n";
    cout << "x = " << x-1 << "\n";
    //cout << "x = " << x << "\n";

    while (ysum <= 1000)
    {
        ysum += y;
        y++;
    }
    cout << "Tong tu 1 den y la: " << ysum << "\n";
    cout << "y = " << y-1 << "\n";
    //cout << "y = " << y << "\n";

    while (zsum <= 1000)
    {
        z++;
        zsum += z;
    }
    cout << "Tong tu 1 den z la: " << zsum << "\n";
    cout << "z = " << z-1 << "\n";
    //cout << "z = " << z << "\n";

    return 0;
}