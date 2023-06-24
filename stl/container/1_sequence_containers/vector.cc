#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;

	//if we know the size
	vector<int> v2(5,1);

	cout<<"vector v2: ";
	for(int i:v2) {
		cout<<i<<" ";
	}cout<<endl;

	//if want to copy vector to another vector
	vector<int> my(v2);

	cout<<"copy of vector v2 in my: ";
	for(int i:v2) {
		cout<<i<<" ";
	}cout<<endl;


	//size mean how many elements in it		
	cout<<"vector size-> "<<v.size()<<endl;

	//capaity means actual capacity or memory allocate to store elements

	cout<<"vector capacity-> "<<v.capacity()<<endl;

	v.push_back(1);	
	cout<<"vector capacity-> "<<v.capacity()<<endl;
	v.push_back(2);
	cout<<"vector capacity-> "<<v.capacity()<<endl;
	v.push_back(3);
	cout<<"vector capacity-> "<<v.capacity()<<endl;
	

	cout<<"vector size-> "<<v.size()<<endl;

	cout<<"elem at index 2 in vector "<<v.at(2)<<endl;

	cout<<"1st elem-> "<<v.front()<<endl;

	cout<<"last elem-> "<<v.back()<<endl;

	cout<<"before pop"<<endl;
	for(int i:v) {
		cout<<i<<" ";
	}cout<<endl;

	v.pop_back();

	cout<<"after pop"<<endl;
	for(int i:v) {
		cout<<i<<" ";
	}cout<<endl;
	

	cout<<"before clear-> "<<v.size()<<endl;
	v.clear();


	cout<<"after clear-> "<<v.size()<<endl;
	cout<<"capacity-> "<<v.capacity()<<endl;




	return 0;
}
