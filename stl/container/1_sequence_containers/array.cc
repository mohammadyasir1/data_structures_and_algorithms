#include <iostream>
#include <array>

using namespace std;

int main() {
	int basic[3]={1,2,3};

	array<int, 4> a = {1,2,3,4};

	int size = a.size();

	for(int i=0; i<a.size(); i++) {

		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	//access with pos nums
	cout<<"elem at 2nd index "<<a.at(2)<<endl;

	//bool 0-false or 1-true
	cout<<"is arr emp or not "<<a.empty()<<endl;

	cout<<"1sr elem in arr "<<a.front()<<endl;
	cout<<"2nd elem in arr "<<a.back()<<endl;


	return 0;
}
