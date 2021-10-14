#include <iostream>
using namespace std;

#define MAX 100

void input(int[],int);
void output(int[],int);
void sortOddUp(int[],int);

int main()
{
    int n, a[MAX];
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    input(a,n);
    output(a,n);
    cout << "Sap xep le tang dan nhung gia tri khac giu nguyen:\n";
    sortOddUp(a,n);
    output(a,n);

    return 0;
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

void sortOddUp(int a[],int n)
{
    for (int i=0;i<(n-1);i++)
    {
        if(a[i]%2!=0)
        {
            int minOdd = a[i];
            for (int j=i+1;j<n;j++)
            {
                if ((a[j]%2!=0)&&(a[j]<minOdd))
                {
                    minOdd = a[j];
                    a[j] = a[i];
                    a[i] = minOdd;
                }
            }
        }
    }
}