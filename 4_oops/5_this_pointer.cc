#include <iostream>
using namespace std;

class mobile {
	
	string model;
	int prince;

	public:
	void set_details(string model, int prince) {
		this->model = model;
		this->prince = prince;
	}

	void disp() {
		cout<<"Model: "<<model<<endl;
		cout<<"Price: "<<prince<<endl;		
	}
};

int main() {
	mobile iphone5s;
	mobile iphone5se;
	iphone5s.set_details("iPhone 5S", 15000);
	cout<<"------------------"<<endl;
	iphone5s.disp();
	cout<<"------------------"<<endl;
	iphone5se.set_details("iPhone 5SE", 19000);
	iphone5se.disp();
	cout<<"------------------"<<endl;
	return 0;
}
