#include <iostream>
using namespace std;

#define MAX 100

void input(int[],int);
void output(int[],int);

int main()
{
    int a[MAX];
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    input(a,n);
    output(a,n);
}

void input(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void output(int a[],int n)
{
    for(int i = 0; i<n;i++)
    {
        cout << "Phan tu thu " << i+1 << " la: " << a[i] << endl;
    }
}