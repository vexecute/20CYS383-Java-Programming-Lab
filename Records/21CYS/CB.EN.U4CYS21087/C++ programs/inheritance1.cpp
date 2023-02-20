#include<iostream>
using namespace std;
class colourrectangle
{
public:
int b,h;
void getarea()
{
    cin>>h>>b;
}
};
class cr: public colourrectangle
{
    public:
    char c;
    void getcolour()
    {
        cin >> c;
    }
void product()
{
    cout<< "area= "<< 0.5*b*h;
}
};

int main()
{
cr r1;
cr r2;
r1.getarea();
r1.product();
r1.getcolour();
r2.getarea();
r2.getcolour();
return 0;
}
