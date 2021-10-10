#include <iostream>
using namespace std;

int main()
{
	//Toan tu so hoc
	int a = 8;
	int b = 6;
	cout << "Tong cua " << a << " va " << b << " la: " << a+b << " \n";
	cout << "Hieu cua " << a << " va " << b << " la: " << a-b << " \n";
	cout << "Tich cua " << a << " va " << b << " la: " << a*b << " \n";
	cout << "Thuong cua " << a << " va " << b << " la: " << a/b << " \n";
	cout << "Lay phan du " << a << " va " << b << " la: " << a%b << " \n";
	cout << "Thuong cua " << a << " va " << b << " la: " << (float) a/b << " \n";
	//EP KIEU
	cout << "Thuong cua " << a << " va " << b << " la: " << 0.1*a/b << " \n";
	//thu tu tu trai qua phai, 0.1*a=0.8 (float*int->float), 0.8/b = 0.133 (float/int->float)
	cout << "Thuong cua " << a << " va " << b << " la: " << a/b*0.1 << " \n";
	//thu tu tu trai qua phai, a/b=1 (int/int->int), 1*0.1 = 0.1 (int*float->float)
	a++;
	cout << a << endl;
	a--;
	cout << a << endl;
	cout << endl;

	//Toan tu gan
	int number = 5;
	cout << "number = " << number << " \n";
	number += 1;
	cout << "number = " << number << " \n";
	number -=2;
	cout << "number = " << number << " \n";
	number *= 2;
	cout << "number = " << number << " \n";
	number /=2;
	cout << "number = " << number << " \n";
	cout << endl;

	//Toan tu so sanh
	int x = 6; int y = 8;
	cout << "x = y ? " << (x==y) << endl;
	cout << "x != y ? " << (x!=y) << endl;
	cout << "x < y ? " << (x<y) << endl;
	cout << "x > y ? " << (x>y) << endl;
	cout << "x <= y ? " << (x>=y) <<endl;
	cout << endl;

	//Toan tu logic
	int c = 10; int d = -5;
	cout << "c && d >0 ? " << (c>0 && d>0) << endl;
	cout << "c || d >0 ? " << (c>0 || d>0) << endl;
	cout << endl;
}