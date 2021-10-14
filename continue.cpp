#include <iostream>
using namespace std;

int main()
{
    //===Bai toan in ra so le===
    /*for (int i=0;i<20;i++)
    {
        if(i%2==0)
        {
            //i++; chi doi voi while va do_while.
            continue;
        }
        cout << i << "\t";
    }*/

    //===Bai toan in ra so le voi while loop===
    /*int i=0;
    while(i<30)
    {
        if(i%2==0)
        {
            i++;
            continue;
        }
        cout << i << "\t";
        i++;
    }*/

    //===Bai toan in ra so le trong day voi do_while loop===
    int i=0;
    do
    {
        if(i%2==0)
        {
            i++;
            continue;
        }
        cout << i << "\t";
        i++;
    } while(i<40);

    return 0;
}