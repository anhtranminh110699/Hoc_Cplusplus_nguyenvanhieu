//===Bai toan viet ham kiem tra so co phai so nguyen to khong?===
#include <iostream>
using namespace std;

int check(int);
void sosanh(int);

int main()
{
    int n;
    cout << "Nhap so n can kiem tra: ";
    cin >> n;
    sosanh(check(n));
}

int check(int n)
{
    int count;
    for (int i = 2; i <(n/2);i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    return count;
}

void sosanh(int a)
{
    if (a==0)
    {
        cout << "So vua nhap la so nguyen to!\n";
    }
    else
    {
        cout << "So vua nhap ko p la so nguyen to!\n";
    }
}