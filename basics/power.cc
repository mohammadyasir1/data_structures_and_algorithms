#include <iostream>
using namespace std;
//first function

int pow(int a, int b){
	int ans=1;
	for(int i=1; i<=b; i++){
		ans=ans*a;
	}

	return ans;

}


int main(){

	int a,b;
	cin>>a>>b;
	//int answer=pow(a,b);	
	cout<<a<<" to the power of "<<b<<" is "<<pow(a,b)<<endl;
	return 0;
}
