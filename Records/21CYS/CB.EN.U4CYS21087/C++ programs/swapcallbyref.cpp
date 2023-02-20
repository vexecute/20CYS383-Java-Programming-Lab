#include<iostream>
using namespace std;
void swap(int &x, int &y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
int main()
{
    int a=5,b=10;
    cout<<"before swapping"<<"\na="<<a<<"\nb="<<b<<endl;
    const swap(a,b);
    cout<<"after swapping"<<"\na="<<a<<"\nb="<<b<<endl;
    return 0;
}