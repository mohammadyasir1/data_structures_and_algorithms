//it store only unique elements
//you can only add or remove no modification works here
//return elements in sorted order
//set is little bit slow compared to unordered set
//unordered set gives elements in random order


#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> s;
	s.insert(5);	
	s.insert(5);
	s.insert(1);
	s.insert(9);
	s.insert(8);
	s.insert(8);
	s.insert(8);
	s.insert(8);
	s.insert(0);
	s.insert(0);
	s.insert(5);
	s.insert(5);
	s.insert(99);
	s.insert(99);
	s.insert(99);
	s.insert(99);
	s.insert(99);
	
	cout<<"before erase ";
	for(auto i:s) {
		cout<<i<<" ";
	}cout<<endl;
	
	s.erase(s.begin());
	cout<<"after erase ";
	for(auto i:s) {
		cout<<i<<" ";
	}cout<<endl;

	//making iterator
	set<int>::iterator it = s.begin();
	it++;
	s.erase(it);
	cout<<"after erasing 1st indexed element ";
	for(auto i:s) {
		cout<<i<<" ";
	}cout<<endl;

	cout<<"is 99 present ";
	cout<<s.count(99)<<endl;//count() check present or not

	//set<int>::iterator itr = s.find(8);
	
	//for(auto it=itr; it!=s.end(); it++) {
	//	cout<<it<<" ";
	//}cout<<endl;
	
	return 0;
}
