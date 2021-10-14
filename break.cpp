#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cout << "So lan lap lon nhat la: ";
    cin >> n;
    cout << "So lan lap mong muon la: ";
    cin >> m;

    //===Break for for loop===
    /*for (int i=0;i<n;i++)
    {
        if(i==m)
        {
            break;
        }
        cout << "Lap trinh ko kho!\n";
    }*/

    //===Break for so_while loop===
    /*int i=0;
    do
    {
        if(i==m)
        {
            break;
        }
        cout << "Lap trinh ko kho!\n";
        i++;
    } while(i<n);*/

    //===Break for while loop===
    int i=0;
    while(i<n)
    {
        if(i==m)
        {
            break;
        }
        cout << "Lap trinh ko kho!\n";
        i++;
    }

    return 0;
}