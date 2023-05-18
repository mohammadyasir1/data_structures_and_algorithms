#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	int a=0, b=1, sum=0;
	cout<<a<<" "<<b<<" ";
	for(int i=1; i<=n; i++){
		int sum=a+b;
		cout<<sum<<" ";
		a=b;
		b=sum;
	}
	cout<<endl;
	return 0;
}
