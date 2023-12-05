#include <iostream>
using namespace std;

class smartphone {
	//data members
	public:
	string model;
	int manufactured;
	bool _5g;

	//constructor with 0 parameter
	smartphone() {
		model = "unknown";
		manufactured = 0;
		_5g = false;
	}

	//constructor with 2 parameters
	smartphone(string m, bool g) {
		model = m;
		_5g = g;
	}

	//constructor with 3 parameters
	smartphone(string m, int manuf, bool g) {
		model = m;
		manufactured = manuf;
		_5g = g;
	}

	//method
	void disp(string m, bool g) {
		cout<<"model: "<<m<<endl;
		//cout<<"manufactured: "<<manufactured<<endl;
		cout<<"5G ?: "<<g<<endl;
	}
	
	//func overloading
	void disp(string m, int manuf, bool g) {
		cout<<"model: "<<m<<endl;
		cout<<"manufactured: "<<manuf<<endl;
		cout<<"5G ?: "<<g<<endl;
	}
};

int main() {
	//creating object
	//using constructor with 0 parameter
	smartphone unknown;

	//using constructor with 2 parameters
	smartphone iphone_5se("iphone 5 se", false);

	//using constructor with 3 parameters
	smartphone iphone_se("iphone se", 2022, true);

	cout<<"-----------------"<<endl;
	iphone_5se.disp("iphone 5 se", false);
	cout<<"-----------------"<<endl;
	iphone_se.disp("iphone se", 2022, true);

	return 0;
}
