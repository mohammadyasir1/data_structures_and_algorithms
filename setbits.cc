#include <iostream>
using namespace std;

int setBits(int n){
	int count=0;
	while(n!=0){
		count+=n&1;
		n=n>>1;
	}
	return count;
}

int main(){
	int a,b;
	cin>>a>>b;
	int ans=setBits(a)+setBits(b);
	cout<<"number of set bits 1 in a,b are "<<ans<<endl;
	return 0;
}
