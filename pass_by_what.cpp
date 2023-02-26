#include <iostream>
#include <string>
using namespace std;

void swap(int &x,int &y);

int main()
{
    int x=0,y=100;
    cout << x << ' ' << y << endl;
    swap(x,y);
    cout << x << ' ' << y << endl;
    return 0;
}

void swap(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << x << ' ' << y << endl;
}