//binary search and all algorithms
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	v.push_back(1);
v.push_back(5);
v.push_back(8);
v.push_back(11);
v.push_back(19);

cout<<"finding 19 -> "<<binary_search(v.begin(), v.end(), 19)<<endl;
cout<<"lower bound of 19-> "<<lower_bound(v.begin(), v.end(),19)-v.begin()<<endl;
cout<<"upper bound of 18-> "<<lower_bound(v.begin(), v.end(),8)-v.begin()<<endl;

	return 0;
}
