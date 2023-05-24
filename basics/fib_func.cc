#include <iostream>
using namespace std;

int fib(int n){
	int a=0,b=1;
	int sum;
	cout<<a<<" "<<b<<" ";
	for(int i=1; i<=n; i++){
		sum=a+b;
		cout<<sum<<" ";
		a=b;
		b=sum;
	}
	cout<<endl;
	return sum;
}

int main(){
	int a;
	cin>>a;
	//cout<<"0 1 ";
	fib(a);
	return 0;
}
