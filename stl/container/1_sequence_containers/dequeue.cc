#include <iostream>
#include <deque>
using namespace std;


int main() {

	deque<int> d;

	d.push_back(99);
	d.push_front(19);
	d.push_front(1);
	d.push_front(3);
	d.push_front(5);


	// d.pop_back();
	// d.pop_front();
	

	for(int i:d) {
		cout<<i<<" ";
	}cout<<endl;

	cout<<"elem at 2nd index: "<<d.at(2)<<endl;


	cout<<"elem at first index: "<<d.front()<<endl;
	cout<<"elem at last index: "<<d.back()<<endl;

	cout<<"empty or not: "<<d.empty()<<endl;

	cout<<"befor erasing "<<d.size()<<endl;
	
	//give parameter i.e range from start to end
	d.erase(d.begin(), d.end());
	
	cout<<"after erasing "<<d.size()<<endl;

	//check empty or not
	cout<<"empty or not: "<<d.empty()<<endl;




	return 0;
}