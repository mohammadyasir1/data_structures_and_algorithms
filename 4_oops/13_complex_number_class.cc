#include <iostream>
using namespace std;

class ComplexNumbers {
	public:	
	int real, imag;
	
	ComplexNumbers(int r=0, int i=0) {
		this->real = r;
		this->imag = i;
	}

	void plus(ComplexNumbers b) {
		//ComplexNumbers a;
		real = real + b.real;
		imag = imag + b.imag;
		//return a;
	}

	void multiply(ComplexNumbers b) {
		int temp = real;
		real = real * b.real - imag * b.imag;
		imag = temp * b.imag + b.real * imag;
	}

	void print() {
		cout<<real<<" + i"<<imag<<endl;
	}

};

int main() {

	int real1, real2, imag1, imag2;
	
	cin>>real1>>imag1;
	cin>>real2>>imag2;

	ComplexNumbers c1(real1, imag1);
	ComplexNumbers c2(real2, imag2);
	
	int choice;
	cin>>choice;

	if(choice==1) {
		c1.plus(c2);
		c1.print();
	}else if(choice==2){
		c1.multiply(c2);
		c1.print();
	}else {	return 0; }
}
