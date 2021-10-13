#include <iostream>
using namespace std;

int main()
{
    //===Bai toan tim x min sao cho 1+2+3+...<=10.===
    /*const int MAX = 10;
    int sum = 0;
    int i = 0;
    do
    {
        sum += i;
        i++;
    } while (sum < MAX);
    cout << "sum = " << sum << endl;
    cout << "i = " << i-1 << endl;*/
    
    //===Bai toan nhap pass===
    const int PASS = 1234;
    int pass;
    do
    {
        cout << "Nhap password!\n";
        cin >> pass;
        if (pass != PASS)
        {
            cout << "Nhap password sai! Yeu cau nhap lai!\n";
        }
    } while (pass != PASS);
    cout << "Ban da nhap dung!\n";
    return 0;
}