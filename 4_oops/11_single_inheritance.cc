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

int main() {
	car c;
	c.get();
	c.drive();
	return 0;
}
