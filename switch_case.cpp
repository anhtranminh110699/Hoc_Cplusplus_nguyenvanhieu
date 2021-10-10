#include <iostream>
using namespace std;

int main()
{
	//Nhap thang va nam va kiem tra thang do co bao nhieu ngay?
	/*int dates, month, year;
	cout << "Nhap vao thang va nam:\n";
	cin >> month;
	cin >> year;
	switch(month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			dates = 31;
			break; //chu y phai co break;
		case 4: case 6: case 9: case 11:
			dates = 30;
			break;
		case 2:
			if (year % 4 == 0 && year % 100 != 0)
			{
				dates = 29;
				cout << "Nam nhuan!\n";
			}
			else
			{
				dates = 28;
			}
			break;
		default:
			cout << "Ban can nhap dung thang!\n";
	}
	if (dates != 0);
	{
		cout << "Thang " << month << " nam " << year << " co " << dates << " ngay!\n";
	}*/

	//Nhap phep tinh can tinh giua 2 so?
	int a,b,c;
	char pheptinh;
	cout << "Nhap a va b: ";
	cin >> a >> b;
	cout << "Chon pheo tinh giua a va b ban muon thuc hien: ";
	cin >> pheptinh;
	switch(pheptinh)
	{
		case '+':
			c = a+b;
			break;
		case '-':
			c = a-b;
			break;
		case '*':
			c = a*b;
			break;
		case '/':
			if (b != 0)
			{
				c = a/b;
			}
			else
			{
				cout << "mau so = 0 khong the thuc hien phep chia!\n";
				return 0;
			}
			break;
		default:
			cout << "Ban can nhap dung phep tinh can tinh toan!\n";
	}
	// if (c!=0)
	// {
	// 	cout << a << pheptinh << b << " = " << c << " \n";
	// }
	cout << a << pheptinh << b << " = " << c << " \n";

	return 0;
}