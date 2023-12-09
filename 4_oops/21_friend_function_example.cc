#include <iostream>
using namespace std;

class Box {

	double width;

public:
	friend void printWidth(Box b);
	void setWidth(double w);
};

void Box::setWidth(double w) {
	this->width = w;
}

void printWidth(Box b) {
	b.width = b.width*2;
	cout<<"width of box : "<<b.width<<endl;
}

int main() {
	Box b1;
	b1.setWidth(10.0);
	printWidth(b1);
	return 0;
}

