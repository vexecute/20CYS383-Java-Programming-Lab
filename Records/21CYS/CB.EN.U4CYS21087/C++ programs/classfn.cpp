#include<iostream>
using namespace std;
class frands
{
    public:
    int id;
    string name;

void enter(int i,string n)
{
    id=i;
    name=n;
}
void display()
{
    cout<<id<<" "<<name<<endl;
    
}
};
int main(void)
{
    frands hi;
    frands bye;
    hi.enter(01,"hello");
    bye.enter(02,"bye");
    hi.display();
    bye.display();
    return 0;
}