#include <iostream>
using namespace std;


class parent {
	
	public: void show() {
			cout<<"inside parent class"<<endl;
		}
};

class subclass1 : public parent {

	public: void show() {
			cout<<"inside subclass 1"<<endl;
		}
};

class subclass2 : public parent {
	
	public: void show() {
			cout<<"inside subclass 2"<<endl;
		}
};

int main() {
	subclass1 o1;
	subclass2 o2;

	o1.show();
	o2.show();

	//calling parent class function
	o1.parent::show();
	o2.parent::show();
	return 0;
}
