#include <iostream>
#include <math.h>
using namespace std;

#define MAX 100

void input(int[],int);
void output(int[],int);
int findLongest(int[],int,int);

int main()
{
    int n,x,a[MAX];
    cout << "Nhap vao so phan tu cua mang: ";
    cin >> n;
    input(a,n);
    output(a,n);
    cout << "Nhap vao so nguyen x: ";
    cin >> x;
    cout << "Phan tu cach xa x nhat la: " << findLongest(a,n,x) << endl;

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

int findLongest(int a[],int n,int b)
{
    int longest;
    int max;
    max = (abs(a[0]-b));
    for (int i=0;i<n;i++)
    {
        //int m;
        //m = a[i]-b;
        if (abs(a[i]-b)>=max)
        {
            max = abs(a[i]-b);
            longest = a[i];
        }
    }
    return longest;
}