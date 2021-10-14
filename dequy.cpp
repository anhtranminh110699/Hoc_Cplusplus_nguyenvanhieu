//Bai toan tinh f(n) = f(n-1)+f(n-2).
#include <iostream>
using namespace std;

int sum(int);

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int S = sum(n);
    //cout << "Tong can tim la: " << sum(n) << endl;
    cout << "Tong can tim la: " << S << endl;

    return 0;
}

int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    return sum(n-1)+n;
}