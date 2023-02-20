#include<iostream>
using namespace std;

class hello{
public:
int x;
protected:
int y;
private:
int z;
};
class bye : public hello {
public:
void display()
{
    x=10;
}
// x stays public
// y stays protected
// z is not accessible from B
};
int main()
{
  bye b;
  b.display();
  b.x=6;
  cout<<"x:"<< b.x <<endl;
}