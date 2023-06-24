#include <iostream>
#include <list>
using namespace std;


//double link list is used to implement stl list
//we cant direct access the elements in list we have to traverse all over the list

int main() {

	list<int> l;

	//copy the prev list
	

list<int> n2(5,99);
	
	cout<<"print new list that have 99 values-> ";
	for(int i:n2) {
		cout<<i<<" ";
	}cout<<endl;


	l.push_back(1);
	l.push_front(19);
	l.push_back(99);

	for(int i:l) {
		cout<<i<<" ";
	}cout<<endl;

	list<int> n(l);
	
	cout<<"print copy of prev list-> ";
	for(int i:n) {
		cout<<i<<" ";
	}cout<<endl;


	cout<<"1st element: "<<l.front()<<endl;
	cout<<"last element: "<<l.back()<<endl;

	cout<<"befor erasing "<<l.size()<<endl;
	
	//there is no range it remove that element where it point eg. first elem
	l.erase(l.begin());
	
	cout<<"after erasing "<<l.size()<<endl;

	//check empty or not
	cout<<"empty or not: "<<l.empty()<<endl;


	return 0;
}