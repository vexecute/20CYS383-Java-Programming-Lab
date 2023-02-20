#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    string name;
    float marks;
};
int main()
{
    student s1;
    s1.id=01;
    s1.name="naan";
    s1.marks=48.7;
    cout<<"id of student 1: "<< s1.id<<endl;
    cout<<"name of student 1: "<<s1.name<<endl;
    cout<<"marks of student 1: "<<s1.marks<<endl;
cout<<endl;
    student s2;
    s2.id=02;
    s2.name="nee";
    s2.marks=45.2;
    cout<<"id of student 2: "<< s2.id<<endl;
    cout<<"name of student 2: "<<s2.name<<endl;
    cout<<"marks of student 2: "<<s2.marks<<endl;


}