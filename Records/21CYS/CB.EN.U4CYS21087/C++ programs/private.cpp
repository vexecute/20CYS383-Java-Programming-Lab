#include<iostream>
using namespace std;
class hello
{
    public:
    int x;
    private:
    int y;
}
int main()
{
    hello m;
    m.x=10;
    m.y=20;
    cout << m.x << m.y << endl;
    return 0;
}