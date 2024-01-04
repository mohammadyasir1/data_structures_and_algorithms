#include <iostream>
#include <vector>

using namespace std;

void insert(vector<int> &v, int tmp){
	// base case
	if(v.size() == 0 || v[v.size()-1] <= tmp){
		v.push_back(tmp);
		return;
	}

	// hypothesis
	int val = v[v.size()-1];
	v.pop_back();
	insert(v, tmp);

	// induction
	v.push_back(val);
}

void sort(vector<int> &v){
	// base case
	if(v.size() == 1)
		return;

	// hypothesis
	int tmp = v[v.size()-1];
	v.pop_back();
	sort(v);


	// induction
	insert(v, tmp);
}

// check array is sorted or not
bool isSorted(vector<int> &v, int index){
	if(index == v.size()-1)
		return true;

	int res = isSorted(v, index+1);

	int ans = res && (v[index] <= v[index+1]);

	return ans;
}

void print(vector<int> &v, int n){
	for(int i=0; i<n; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){

	vector<int> v = {2,3,7,6,4,5,9};

	int n = v.size();

	cout<<"array before sort\n";
	print(v, n);
	if(isSorted(v, 0))
		cout<<"sorted\n";
	else
		cout<<"not sorted\n";


	sort(v);
	cout<<"array after sort\n";
	print(v, n);
	if(isSorted(v, 0))
		cout<<"sorted\n";
	else
		cout<<"not sorted\n";
	

	return 0;
}