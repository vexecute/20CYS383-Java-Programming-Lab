#include<bits/stdc++.h>
using namespace std;
//FUNCTION/METHOD OVERLOADING
class test
{
public:
    void same(){
        cout<<"function with no parameters"<<endl;
    }
    void same(int a){
        cout<<"function with integer as parameter"<<endl;
    }
    void same(double a){
        cout<<"function with float as parameter"<<endl;
    }
};

int main()
{
    test a1;
    a1.same();
    a1.same(1);
    a1.same(2.4);
}
---------------------------------
//OPERATOR OVERLOADING
class Complex{
private:
    int real,imag;

public:
    Complex(int r=0,int i=0){
        real=r;
        imag=i;
    }
    Complex operator+(Complex const &obj){
        Complex res;
        res.imag=imag+obj.imag;
        res.real=real+obj.real;
        return res;
    }

    void display(){
        cout<<real<<" +"<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex c1(10,7); 
    Complex c2(20,10);
    Complex c3=c1+c2;
    c3.display();
}
---------------------------------

//VIRTUAL FUNCTIONS
class base{
public:
    virtual void print(){
        cout<<"base class print"<<endl;
    }
    void display(){
        cout<<"base class display"<<endl;
    }
};
class derived:public base{
    void print(){
        cout<<"derived class print"<<endl;
    }
    void display(){
        cout<<"derived class display"<<endl;
    }
};
int main()
{
    base *baseptr;
    derived d;
    baseptr=&d;
    baseptr->print();
    baseptr->display();
}
















