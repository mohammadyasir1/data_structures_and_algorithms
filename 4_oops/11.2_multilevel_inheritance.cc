#include <iostream>
using namespace std;

class vehicle {
	public:
		void drive() {
			cout<<"Now Driving..."<<endl;
		}
};

class car : public vehicle {
	public:
		void get() {
			cout<<"Got this car!"<<endl;
		}
};

class bmw : public car {
	public:
		void disp() {
			cout<<"Price of this car is 37L"<<endl;
		}
};

int main() {
	bmw b1;
	b1.disp();
	b1.get();
	b1.drive();
	return 0;
}
