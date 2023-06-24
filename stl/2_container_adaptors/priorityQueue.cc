#include <iostream>
#include <queue>
using namespace std;

int main() {

	//max heap 
	//if we want to get something or remove something from priority queueu
	//it gives the greatest element from the queue

	priority_queue<int> maxi;


	//min heap
	priority_queue< int, vector<int>, greater<int> > mini;

	maxi.push(1);
	maxi.push(3);
	maxi.push(2);
	maxi.push(0);
	
	cout<<"for maxi-> ";
	int n= maxi.size();
	for(int i=0; i<n; i++) {
		cout<<maxi.top()<<" ";
		maxi.pop();
	}
	cout<<endl;

	mini.push(1);
	mini.push(2);
	mini.push(0);
	mini.push(4);
	mini.push(3);

	cout<<"for mini-> ";
	int n1=mini.size();
	for(int i=0; i<n1;i++) {
		cout<<mini.top()<<" ";
		mini.pop();
	}
	cout<<endl;

	cout<<"is empty or not-> "<<mini.empty()<<endl;

	cout<<"is empty or not-> "<<maxi.empty()<<endl;
	return 0;
}
