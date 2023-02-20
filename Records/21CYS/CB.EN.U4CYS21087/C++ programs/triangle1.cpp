#include<iostream>
using namespace std;

class triangle
{
    private:
    int l;
    int b;
float area()
{
    float a= 0.5*l*b;
    return a;
}
public:
    void read(int a1,int a2)
    {
        l=a1;
        b=a2;
    }
void display();
};
void triangle::display() //scope resolution operator
{
    cout<< area() << endl;
};
int main()
{
    triangle T[2]; //using arrays to print area of multiple triangles
    int i,a,b;
    for(i=0;i<2;i++)
    {
        cin>>a;
        cin>>b;
        T[i].read(a,b);
        T[i].display();
    }
return 0;
}