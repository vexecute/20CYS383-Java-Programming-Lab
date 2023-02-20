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
int t;
    void read()
    {
        cin>>l;
        cin>>b;
    }
void display();
};
void triangle::display() //scope operator
{
    cout<< area() << endl;
};
int main()
{
    triangle T[2]; //using arrays to print area of multiple triangles
    int i;
    for(i=0;i<2;i++)
    {
        T[i].read();
        T[i].display();
    }
return 0;
}