/*
	int     =>   4 bytes
	float   =>   4 bytes
	double  =>   8 bytes
	boolean =>   1 bytes
	char    =>   1 bytes
	string  =>   Khong phai built-in data type; duoc dung thuong xuyen.
*/

#include <iostream>

using namespace std;

int main()
{
	//Kieu so nguyen
	int age = 20;
	cout << age << "\n";
	int v = 3e8; // e hoac E dai dien cho 10 mu ...
	cout << v << endl;
	cout <<"\n";

	//Kieu so thuc
	float width = 2.5;
	cout << width << "\n";
	double height = 5.8;
	cout << height << "\n";
	cout <<"\n";

	//Kieu dung sai
	bool is_success = false;
	cout << is_success << "\n";
	bool is_value = true;
	cout << is_value << "\n";
	cout <<"\n";

	//Kieu string
	string brand_name = "Lap trinh khong kho!";
	cout << brand_name << "\n";
	cout <<"\n";

	return 0;
}