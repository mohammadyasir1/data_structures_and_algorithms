#include <iostream>
using namespace std;

class abstraction {
	//private data members
	int a, b;

	//method to set and get private data members
	public:
	void set(int x, int y) {
		this->a = x;
		this->b = y;
	}

	void get() {
		cout<<"-------------"<<endl;
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
		cout<<"-------------"<<endl;
	}
};

int main() {
	abstraction obj;
	obj.set(19,99);
	obj.get();
	return 0;
}
