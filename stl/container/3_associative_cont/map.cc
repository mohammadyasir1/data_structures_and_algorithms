//its a data structure in which our data is stored in the form of key, value
//mean 1 point "one", 2 point "two"
//all keys are unique and one key will point only one value
//sometimes value should be same but key not


#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int, string> m;
	m[1]="one";
	m[2]="two";
	m[19]="val";
	
	m.insert({99,"yasir"});
	cout<<"before erase"<<endl;
	for(auto i:m) {
		cout<<i.first<<" "<<i.second<<endl;
	}

	cout<<"finding 99 -> "<<m.count(99)<<endl;
	m.erase(19);
	cout<<"after erase"<<endl;
	for(auto i:m) {
		cout<<i.first<<" "<<i.second<<endl;
	}

	m.insert({19,"my"});
	auto it = m.find(1);
	for(auto i=it;i!=m.end();i++) {
		cout<<(*i).first<<endl;
	}
	return 0;
}
