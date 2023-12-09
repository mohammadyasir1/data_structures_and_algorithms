#include <iostream>
using namespace std;

class Rectangle {
	int length;

public:
	Rectangle() {
		length = 10;
	}

	friend int printLength(Rectangle);//friend function
};

int printLength(Rectangle r) {
	r.length +=10;
	return r.length;
}

int main() {

	Rectangle r;
	cout<<"length of Rectangle: "<<printLength(r)<<endl;

	return 0;
}