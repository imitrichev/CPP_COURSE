#include <iostream>
using namespace std;
class A
{
public:
	virtual void print(){cout<<"A";}
};
class B: public A
{
public:
	virtual void print(){cout<<"B";}
};

int main()
{
A* a[10];
for (int i=0; i<5; i++)
 a[i] = new B();
for (int i=5; i<10; i++)
 a[i] = new A();
for (int i=0; i<10; i++)
	a[i]->print();
for (int i=0; i<10; i++)
	delete a[i];
	return 0;
}
