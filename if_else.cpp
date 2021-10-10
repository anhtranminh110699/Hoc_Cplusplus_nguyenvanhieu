#include <iostream>
using namespace std;

#define PASS 12345

int main()
{
	/*//If
	int pass;
	cout << "Moi ban nhap mat khau: ";
	cin >> pass;
	if (pass == PASS)
	{
		cout << "Ban da nhap dung mat khau!\n";
	}
	cout << "Ket thuc!\n";*/

	/*//If_else + do_while loop
	int pass;
	do
	{
		cout << "Moi ban nhap mat khau: ";
		cin >> pass;
		if (pass == PASS)
		{
			cout << "Ban da nhap dung mat khau!\n";
			break;
		}
		else
		{
			cout << "Ban da nhap sai mat khau! Yeu cau nhap lai!\n";
		}
	} while (pass!=PASS);
	cout << "Ket thuc!\n";*/

	/*//If_else if_else
	int point;
	cout << "Nhap diem: ";
	cin >> point;
	if (point >= 8)
	{
		cout << "Gioi!\n";
	}
	else if (point>=6&&point<8)
	{
		cout << "Kha!\n";
	}
	else if (point>=4&&point<6)
	{
		cout << "Trung binh!\n";
	}
	else
	{
		cout << "Yeu\n";
	}*/

	//If_else long nhau
	int point;
	cout << "Nhap diem: ";
	cin >> point;
	if (point >= 5)
	{
		cout << "Dat yeu cau!\n";
		if (point >= 8)
		{
			cout << "Gioi!\n";
		}
		else
		{
			cout << "Kha!\n";
		}
	}
	else
	{
		cout << "Khong dat yeu cau!\n";
		if (point < 4)
		{
			cout << "Qua kem!\n";
		}
		else
		{
			cout << "Kem! Can co gnag!\n";
		}
	}

	return 0;
}