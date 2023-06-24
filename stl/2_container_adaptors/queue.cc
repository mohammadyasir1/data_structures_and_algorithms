#include <iostream>
#include <queue>
using namespace std;

int main() {

	queue<string> q;
	q.push("gnu");
	q.push("linux");
	q.push("xfce");

	cout<<"top element in stack is: "<<q.front()<<endl; 
	
	cout<<"size of stack before pop->: "<<q.size()<<endl; 

	q.pop();
	cout<<"top element in stack is: "<<q.front()<<endl; 

	cout<<"size of stack after pop->: "<<q.size()<<endl; 


	return 0;
}