#include <iostream>
using namespace std;

class Base {
	// abstract class
public:
	//pure virtual function
	virtual void y() = 0;
};

class Derived : public Base {
public:
	void y() {
		cout<<"virtual function in derived class"<<endl;
	}
};

int main() {
	//we cant create obj of abstract class 
	Base* b;
	Derived d;

	b = &d;

	b->y();
	return 0;
}

