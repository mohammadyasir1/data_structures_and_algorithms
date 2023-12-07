#include <iostream>
using namespace std;

class complex {
	int real, imag;

	public:
	complex(int r=0, int i=0) {
		this->real = r;
		this->imag = i;
	}

	//this is automatically called when '+' is used with
	//between two complex objects
	
	complex operator + (complex &b) {
		complex a;
		a.real = real + b.real;
		a.imag = imag + b.imag;
		return a;
	}

	void print() {
		cout<<real<<" + i"<<imag<<endl;
	}
};

int main() {
	complex c1(10,5);
	complex c2(2,4);

	complex c3 = c1+c2;
	c3.print();
	return 0;
}
