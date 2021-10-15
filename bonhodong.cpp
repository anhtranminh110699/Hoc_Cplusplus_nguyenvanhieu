#include <iostream>
using namespace std;

int main()
{
    int n;
    do
    {
        cout << "So luong sinh vien: ";
        cin >> n;
    } while (n <= 0);

    //Cap phat bo nho dong cho con tro ptr kieu float
    float *ptr;
    ptr = new float[n];

    cout << "Nhap diem trung binh cua cac sinh vien: \n";
    for (int i=0;i<n;i++)
    {
        cout << "Sinh vien " << i+1 << " : ";
        cin >> *(ptr+i);
    }

    cout << "Xuat diem cua cac sinh vien: \n";
    for (int i=0;i<n;i++)
    {
        cout << "Sinh vien thu " << i+1 << " co DTB la: " << *(ptr+i) << endl;
    }

    //Giai phong con tro
    delete[] ptr;

    return 0;
}