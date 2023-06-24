#include <iostream>
#include <stack>
using namespace std;

int main() {

	stack<string> s;

	s.push("gnu");
	s.push("linux");
	s.push("xfce");

	cout<<"top element in stack is: "<<s.top()<<endl; 

	s.pop();

	cout<<"top element in stack is: "<<s.top()<<endl; 

	cout<<"size of stack-> "<<s.size()<<endl;

	//check empty or not
	cout<<"is stack empty or not: "<<s.empty()<<endl; 



	return 0;
}
