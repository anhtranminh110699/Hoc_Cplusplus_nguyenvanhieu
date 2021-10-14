#include <iostream>
using namespace std;

void inputMath(float&);
void inputPhi(float&);
float trungbinh(float,float);

int main()
{
    float mathPoint, phyPoint;
    string name;

    cout << "Nhap ho ten: ";
    cin >> name;
    //neu nhap chuoi co dau cach, chuong trinh se chay sai

    inputMath(mathPoint);
    inputPhi(phyPoint);

    //trungbinh(mathPoint,phyPoint);
    cout << "Trung binh cong cua diem Toan va Ly la: " << trungbinh(mathPoint,phyPoint) << endl;

    return 0;
}

void inputMath(float &mathPoint)
{
    do
    {
        cout << "Nhap diem Toan: ";
        cin >> mathPoint;
    } while (mathPoint < 0 || mathPoint > 10);
    cout << mathPoint << endl;
}

void inputPhi(float &phyPoint)
{
    do
    {
        cout << "Nhap diem Ly: ";
        cin >> phyPoint;
    } while (phyPoint < 0 || phyPoint > 10);
    cout << phyPoint << endl;
}

float trungbinh(float a,float b)
{
    float tb;
    tb = (a+b)/2;
    return tb;
}