#include <iostream>
using namespace std;

class A {
	public:
		void show_A(){
			cout<<"class A"<<endl;
		}
};

class B : public A {
	public:
		void show_B(){
			cout<<"class B"<<endl;
		}
};

class C : public A {
	public:
		void show_C(){
			cout<<"class C"<<endl;
		}
};

int main() {
	//obj of B class
	B b;
	cout<<"calling function from B class"<<endl;
	b.show_A();
	b.show_B();
	
	C c;
	cout<<"calling function from C class"<<endl;
	c.show_A();
	c.show_C();

	return 0;
};
