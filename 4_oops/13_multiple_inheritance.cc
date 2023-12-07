#include <iostream>
using namespace std;

class A {
	public:
		A() {
			cout<<"hello from A class"<<endl;
		}
};

class B {
	public:
		B() {
			cout<<"hello from B class"<<endl;
		}
};

class C : public A, B {
	//note the order
	public:
		C() {
			cout<<"hello from C class"<<endl;
		}
};

int main() {
	C obj;
	return 0;
}
