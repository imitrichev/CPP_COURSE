#include <iostream>
#include <memory>
#include <vector>
using std::unique_ptr;
using std::move;
using std::shared_ptr;

struct B
{
	std::vector<int> v;
	B(int size):v(size){};
};

struct A
{
	shared_ptr<B> my_ptr;
	int a;
	A(int _a):a(_a){}
	std::ostream& operator<<(std::ostream& os)
	{
		os<<a;
		return os;
	}

	int get_a()
	{return a;}
	void setMyPtr(shared_ptr<B> b){my_ptr=b;}
};

int main()
{
	unique_ptr<A> A_ptr(new A(5));
	unique_ptr<A> y_ptr;
	y_ptr = move(A_ptr);
	std::cout<<" "<<(*y_ptr).get_a()<<"\n";
	B* my_b = new B(10);
	shared_ptr<B> shptr(my_b);
	(*y_ptr).setMyPtr(shptr);
	//y_ptr=A_ptr;
	return 0;
}
