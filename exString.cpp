    //cin.ignore();

    //cin.ignore(5);
    //tham so la so ky tu muon xoa luu trong bo nho dem.
    
    // cin.ignore();
    // cin.ignore();
    // cin.ignore();
    // cin.ignore();
    // cin.ignore();
    //so cau lenh cung the hien so ky tu muon xoa luu trong bo nho dem.

#include <iostream>
using namespace std;

#define MAX 100

string to_lower(string);
void input(string[],int);
void output(string[],int);
int find_product(string[],int,string);

int main()
{
    string sanpham[MAX];
    string keyword;
    int search_result;
    int n;
    int choice;
    do
    {
        cout << "Nhap so luong san pham: ";
        cin >> n;
    } while (n<=0);
    cin.ignore();
    input(sanpham,n);
    while(1)
    {
        cout << "=====================\n";
        cout << "1. Tim kiem.\n";
        cout << "2. Hien thi.\n";
        cout << "0. Thoat.\n";
        cout << "=====================\n";
        /*do
        {
            cout << "Nhap lua chon cua ban: ";
            cin >> choice;
        } while (choice)*/
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;
        cin.ignore();
        switch(choice)
        {
            case 1: cout << "=====================\n";
                    cout << "Nhap ten san pham can tim kiem!\n";
                    getline(cin,keyword);
                    search_result = find_product(sanpham,n,keyword);
                    if (search_result != -1)
                    {
                        cout << "Tim thay san pham o vi tri " << search_result << endl;
                    }
                    else
                    {
                        cout << "Khong tim thay san pham trong kho hang!\n";
                    }
                    break;
            case 2: cout << "=====================\n";
                    cout << "Danh sach don hang trong kho la: \n";
                    output(sanpham,n);
                    break;
            case 0: cout << "Ban da chon thoat chuong trinh!\n";
                    return 0;
                    break;
            default: cout << "Ban can chon cac muc co san cua chuong trinh!\n";
                     break;
        }
    }
}

string to_lower(string str)
{
    for (int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] +=32;
        }
    }
    return str;
}

void input(string sanpham[],int n)
{
    cout << "Nhap vao cac san pham:\n";
    for (int i=0;i<n;i++)
    {
        cout << "Nhap ten san pham thu " << i+1 <<": ";
        getline(cin, sanpham[i]);
    }
}

void output(string sanpham[],int n)
{
    cout << "D/s san pham: \n";
    for(int i; i<n;i++)
    {
        cout << sanpham[i] << "\n";
    }
}

int find_product(string sanpham[],int n,string keyword)
{
    keyword = to_lower(keyword);
    for (int i=0;i<n;i++)
    {
        if(to_lower(sanpham[i])==keyword)
        {
            return i;
        }
    }
}