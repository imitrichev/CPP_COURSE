#include <string>
#include <iostream>

using namespace std;

#define setProperties(index, pass, login, buf)   \
   { buf->index   = index;   \
    buf->pass  = pass;   \
    buf->login  = login;}

class PersonAuth
{
	public:
		PersonAuth(int i,string l,string p){ index=i; login=l; pass=p; }
		int index;
		string login, pass;
};

int main()
{
	PersonAuth* some_person[3];
	some_person[0]=new PersonAuth(1,"John","pass1");
	some_person[1]=new PersonAuth(2,"Dave","pass2");
	some_person[2]=new PersonAuth(3,"Kate","pass3");

	int index;
	string pass, login;
	cout<<"\nEnter index ";
	cin>>index;
	cout<<"\nEnter login ";
	cin>>login;
	cout<<"\nEnter pass ";
	cin>>pass;
	cout<<"\n";

	if ((index>=0) && (index<=2))
		setProperties(index,pass,login,some_person[index]);

	for (int i=0; i<3; i++)
		delete some_person[i];
	//delete [] some_person;

	return 0;
}
