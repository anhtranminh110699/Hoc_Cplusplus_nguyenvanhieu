#include <iostream>

using namespace std;
//bao chuong trinh rang chung ta su dung luon namespace std.

int main()
{
	string name; //kieu string, luu chuoi cac ki tu.
	//string name = "Minh Anh";
	cin >> name;
	cout << "Hello " << name << endl;
	//du o tren, name la kieu string, nhung in ra chi in day char dau
	//tuc la neu co dau cach thi se ko in cac ki tu sau dau cach
	//boi vi nhap vao bang ham cin
	return 0;
}

/*#include <iostream>

//using namespace std;
//ko su dung dong nay, tuc la phai viet std o dau moi ham thuoc namespace std.

int main()
{
	std::string name;
	std::cin >> name;
	std::cout << "Hello " << name << std::endl;
	return 0;
}*/