#include <iostream>
#include<unistd.h> 
using namespace std;


class Test {
	public:	
	Test(){
		cout<<"Constructor is called..."<<endl;
	}

	~Test(){
		cout<<"Destructor is called!"<<endl;
	}
};



int main() {

	Test t;
	cout<<"After some time program ends!"<<endl;
	sleep(5);

	return 0;
}
