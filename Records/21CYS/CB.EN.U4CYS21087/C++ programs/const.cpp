#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    string name;
    float salary;
    employee(int i,string n,float s)
    {
       id=i;
       name=n;
       salary=s; 
    }
    void display()
    {
        cout<<id<<" "<< name <<" "<< salary << endl;
    }
};
int main()
{
    employee e1=employee(01,"mani",2133.13);
    employee e2=employee(02,"ilsm",12312.21);
    e1.display();
    e2.display();
    return 0;
}