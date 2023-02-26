#include <iostream>
using namespace std;

void move(int n,char src,char des,char tmp)
{
    if (n==1){
        cout << "Move disk from " << src << " to " << des << endl;
    }
    else{
        move(n-1,src,tmp,des);
        move(1,src,des,tmp);
        move(n-1,tmp,des,src);
    }
}

int main()
{
    int x;
    cin >> x;
    move(x,'A','C','B');
    return 0;
}