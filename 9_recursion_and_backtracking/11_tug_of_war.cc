#include <bits/stdc++.h> 
using namespace std;

void solve(vector<int> &arr, int index, int strength, int t1_stength, int t1_players, int &ans, int n) {

	if(t1_players == (n+1)/2) {
		int t2_stength = (strength - t1_stength);

		ans = min(ans, abs(t2_stength - t1_stength));
		return;
	}

	for(int i=index; i<n; i++) {
		solve(arr, (i+1), strength, t1_stength + arr[i], (t1_players + 1), ans, n);
	}
}


int tugOfWar(vector<int> &arr, int n) {
	
	int strength = 0;

	for(int i=0; i<n; i++) {
		strength += arr[i];
	}

	int t1_stength = 0, t1_players = 0, ans = INT_MAX;

	solve(arr, 0, strength, t1_stength, t1_players, ans, n);

	return ans;
}



int main() {

	int n;
	cout<<"enter the number of students: ";
	cin>>n;

	vector<int> arr(n);
	cout<<"enter the strength of the students: ";
	for(int i=0; i<arr.size(); i++) {
		cin>>arr[i];
	}

	cout<<"the absolute difference between the team’s strength is "<<tugOfWar(arr, n)<<endl;

	return 0;
}