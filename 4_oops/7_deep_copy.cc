
#include <iostream>
using namespace std;

class test {
	int a, *p;

	public:
	test() {
		a = 0;
		
		//allocating dynamic memory address
		p = new int;
		p = 0;
	}

	//parametrized constructor
	test(int x, int y) {
		a = x;

		p = new int;
		*p = y;

	}

	//our copy constructor that perform a deep copy
	test(test &obj) {
		this-> a = obj.a;
		p = new int;
		*p = *(obj.p);

	}

	void update() {
		a+=1;
		*p+=1;
	}

	void disp() {
		cout<<"-----------------------"<<endl;
		cout<<"A: "<<a<<endl;
		cout<<"P: "<<*p<<endl;
		cout<<"-----------------------"<<endl;
	}

};

int main(){

	test obj1(1, 19);
	cout<<"obj 1"<<endl;
	obj1.disp();	
	test obj2(obj1);//copy constructor called by compiler
	
	cout<<"after copying obj1 in obj2"<<endl;
	//obj1.disp();
	cout<<"obj 2"<<endl;
	obj2.disp();

	cout<<"after updating obj1 then"<<endl;
	obj1.update();
	
	cout<<"obj 1"<<endl;
	obj1.disp();
	cout<<"obj 2"<<endl;
	obj2.disp();


	return 0;
}
