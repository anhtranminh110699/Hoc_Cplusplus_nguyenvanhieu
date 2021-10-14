#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //===Bai toan tim tong S; S = 1+1/2+1/3+...+1/n.===
    /*int n;
    float S=0;
    do
    {
        cout << "Nhap vao n: ";
        cin >> n;
    } while (n <=0 );
    for(int i=1;i<=n;i++)
    {
        S+=(1.0/i); //1.0 o day vi i kieu int, S kieu float.
    }
    cout << "Tong S can tim la: " << S << "\n";*/

    //===Bai toan tim tong S; S = a^1+a^3+a^5+...+a^2n+1.===
    int a,n,m;
    float S=0;
    cout << "Nhap vao thua so a: ";
    cin >> a;
    cout << "Nhap vao so n: ";
    cin >> n;
    m = 2*n+1;
    int i=1;
    while(i<=m)
    {
        S+=(1.0*(pow(a,i)));
        i+=2;
    }
    cout << "Tong S can tim la: " << S << "\n";
    return 0;
}