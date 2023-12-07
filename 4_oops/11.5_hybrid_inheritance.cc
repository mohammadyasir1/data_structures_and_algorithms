#include <iostream>
using namespace std;

class student {
	public:
		void show(){
			cout<<"function of student class"<<endl;
		}
};

class project {
	public:
		void show(){
			cout<<"function of project class"<<endl;
		}
};

class exam : public student {
	public:
		void show(){
			cout<<"function of exam class"<<endl;
		}
};

class result : public project, public exam {
	public:
		void show(){
			cout<<"function of result class"<<endl;
		}
};

int main() {
	//obj of exam class
	exam e;
	//calling function from exam class"<<endl;
	e.show();

	//calling function from exam class to get student function
	//if same name function exist
	e.student::show();

	//obj of result class
	result r;
	r.show();//show result class function
	r.exam::show();//show exam class funtion
	r.project::show();//show project class function


	return 0;
};
