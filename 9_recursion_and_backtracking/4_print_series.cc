#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& v, int n, int k, int curr) {
	if(curr <= 0)
		return;


	curr = curr - k;
	v.push_back(curr);

	solve(v, n, k, curr);

	curr = curr + k;
	v.push_back(curr);
}

vector<int> printSeries(int n, int k) {
	
	vector<int> series;

	int curr = n;

	series.push_back(curr);

	solve(series, n, k, curr);

	return series;

}



int main() {

	int n, k;
	cout<<"enter N and K: ";
	cin>>n>>k;

	vector<int> v = printSeries(n, k);

	for(int i=0; i<v.size(); i++) {
		cout<<v[i]<<" ";
	}
	cout<<endl;

	return 0;
}