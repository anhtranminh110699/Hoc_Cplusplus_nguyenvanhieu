/*
	Bien: Gia tri co the thay doi.
	Hang: Gia tri khong the thay doi, gan gia tri khi cap phat.

	Co 2 cach su dung khai bao hang:
	+ Su dung #define
	+ Su dung tu khoa const
*/

#include <iostream>
using namespace std;

#define PI_VAL 3.14

int main()
{
	//Bien
	int x = 5;
	cout << x << "\n";
	x = 10;
	cout << x << "\n";
	char y = '5';
	cout << y << "\n";

	//Hang
	cout << PI_VAL << "\n";
	//PI_VAL = 5;
	//cout << PI_VAL << "\n";

	const float pi = 3.14;
	cout << pi << "\n";
	//pi = 5;
	//cout << pi << "\n";

	return 0;
}