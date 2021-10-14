#include <iostream>
using namespace std;

#define MAX_ROW 100
#define MAX_COL 100

void input(int[][MAX_COL],int,int);
void output(int[][MAX_COL],int,int);

int main()
{
    int a[MAX_ROW][MAX_COL];
    int n, m;
    cout << "Nhap vao so hang, so cot cua ma tran: ";
    cin >> n >> m;
    input(a,n,m);
    output(a,n,m);

    return 0;
}

void input(int a[][MAX_COL],int n, int m)
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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}