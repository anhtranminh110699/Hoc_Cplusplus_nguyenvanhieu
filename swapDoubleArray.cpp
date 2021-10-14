//Bai toan hoan vi 2 hang cua ma tran
#include <iostream>
using namespace std;

#define MAX_ROW 100
#define MAX_COL 100

void input(int[][MAX_COL],int,int);
void output(int[][MAX_COL],int,int);
void swap(int[][MAX_COL],int,int,int);

int main()
{
    int a[MAX_ROW][MAX_COL];
    int n, m;
    int x, y;
    do
    {
        cout << "Nhap so hang va so cot cua ma tran: ";
        cin >> n >> m;
    } while (n<=0||m<=0||n>MAX_ROW||m>MAX_COL);

    input(a,n,m);
    output(a,n,m);
    do
    {
        cout << "Chon 2 hang muon hoan vi: ";
        cin >> x >> y;
    } while (x>n||y>n);
    swap(a,m,x,y);
    cout << "Ma tran sau khi hoa vi la: \n";
    output(a,n,m);

    return 0;
}

void input(int a[][MAX_COL],int n,int m)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void output(int a[][MAX_COL],int n,int m)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void swap(int a[][MAX_COL],int m,int x,int y)
{
    int temp;
    for (int j=0;j<m;j++)
    {
        //int temp;
        temp = a[x-1][j];
        a[x-1][j] = a[y-1][j];
        a[y-1][j] = temp;
    }
}