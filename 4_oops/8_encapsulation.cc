#include <iostream>
using namespace std;

class student {
	//private data members
	string name;
	int roll_no;
	int age;

	//get method for access to private variable
	public:
	string getName() {
		return name;
	}

	int getRollNo() {
		return roll_no;
	}

	int getAge() {
		return age;
	}

	//set method to set private variable
	void setName(string name) {
		this->name = name;
	}

	void setRollNo(int roll_no) {
		this->roll_no = roll_no;
	}

	void setAge(int age) {
		this->age = age;
	}

	void showDetails() {
		cout<<"-----------------------------"<<endl;
		cout<<"student name: "<<name<<endl;
		cout<<"student roll no: "<<roll_no<<endl;
		cout<<"student age: "<<age<<endl;
		cout<<"-----------------------------"<<endl;
	}
};

int main() {

	string name;
	int age, roll_no;
	student s1;
	
	cout<<"enter your name: ";
	cin>>name;

	cout<<"enter your roll no: ";
	cin>>roll_no;

	cout<<"enter your age: ";
	cin>>age;

	s1.setName(name);
	s1.setRollNo(roll_no);
	s1.setAge(age);

	s1.showDetails();

	return 0;
}
