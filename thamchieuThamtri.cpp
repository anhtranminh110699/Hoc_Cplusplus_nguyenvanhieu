#include <iostream>
using namespace std;

void swap_false(int,int);
void swap_pointer(int *, int *);
void swap_ref(int &,int &);

int main()
{
    int a = 5;
    int b = 7;
    //Tham tri
    swap_false(a,b);
    cout << "Gia tri cua 2 so sau khi hoan doi la: a = " << a << " b = " << b << " \n";
    cout << "----------------------------------\n";
    a = 5;
    b = 7;
    //Truyen vao con tro
    swap_pointer(&a,&b);
    cout << "Gia tri cua 2 so sau khi hoan doi la: a = " << a << " b = " << b << " \n";
    cout << "----------------------------------\n";
    a = 5;
    b = 7;
    //Tham chieu
    swap_ref(a,b);
    cout << "Gia tri cua 2 so sau khi hoan doi la: a = " << a << " b = " << b << " \n";
}

void swap_false(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Gia tri cua 2 so sau khi hoan doi la: a = " << a << " b = " << b << " \n";
}

void swap_pointer(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "Gia tri cua 2 so sau khi hoan doi la: a = " << a << " b = " << b << " \n";
    cout << "Gia tri cua 2 so sau khi hoan doi la: a = " << *a << " b = " << *b << " \n";

}

void swap_ref(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Gia tri cua 2 so sau khi hoan doi la: a = " << a << " b = " << b << " \n";
}