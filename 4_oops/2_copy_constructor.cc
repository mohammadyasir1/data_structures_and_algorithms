#include <iostream>
using namespace std;


class smartphone{
	//Data Members(Properties)
	public:
	string model;
	int year_of_manufacture;
	bool is_5g;

	//public:
	//default constructor
	smartphone(){
		model = "unknown";
		year_of_manufacture = 0;
		is_5g = false;
	}

	//parametrized constructor
	smartphone(string model_str, int manufacture, bool _5g){
		model = model_str;
		year_of_manufacture = manufacture;
		is_5g = _5g;
	}

	//copy constructor
	smartphone(smartphone &obj){
		//copyies data of the ibj parameter
		model = obj.model;
		year_of_manufacture = obj.year_of_manufacture;
		is_5g = obj.is_5g;
	}

	//method
	void print_details(){
		cout<<"model: "<<model<<endl;
		cout<<"manufatured: "<<year_of_manufacture<<endl;
		cout<<"5G ?: "<<is_5g<<endl;
	}
};

int main() {
	//creating object
	//using default constructor
	smartphone unknown;

	//using parametrized constructor
	smartphone iphone_11("iphone 11", 2019, false);
	
	//using copy constructor
	//remember dont use & here like &iphone
	//and also class name like (smartphone iphone_11)
	smartphone iphone_11_pro(iphone_11);

	iphone_11_pro.model = "iphone 11 pro";
	iphone_11_pro.is_5g = true;
	
	cout<<"-------------------------"<<endl;
	iphone_11.print_details();
	cout<<"-------------------------"<<endl;
	iphone_11_pro.print_details();
	return 0;
}
