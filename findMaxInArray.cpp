#include <iostream>
using namespace std;

#define MAX 100

void input(int[],int);
void output(int[],int);
int findMax(int[],int);

int main()
{
    int n, a[MAX];
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    input(a,n);
    output(a,n);
    cout<< "Phan tu lon nhat trong mang la: " << findMax(a,n) << endl;
}

void input(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void output(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout << "Phan tu thu " << i+1 << " la: " << a[i] << endl;
    }
}

int findMax(int a[],int n)
{
    int aMax;
    aMax = a[0];
    for (int i=0;i<n;i++)
    {
        if (a[i]>aMax)
        {
            aMax = a[i];
        }
    }
    return aMax;
}