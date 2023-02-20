#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    string name;
    float salary;
    employee(int id,string name,float salary)
    {
        this->id=id;
        this->name=name;
        this->salary=salary;
    }
    void display()
    {
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};
int main(void)
{
    employee e1=employee(01,"eren",123123.12);
    e1.display();
    employee e2=employee(02,"sekar",23123.21);
    e2.display();
    return 0;
}