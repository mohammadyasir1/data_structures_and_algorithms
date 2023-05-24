#include <iostream>
using namespace std;

int ap(int n){
	int ap=(3*n+7);
	return ap;
}

int main(){
	int n;
	cin>>n;
	cout<<"arithmatic progression of "<<n<<" is "<<ap(n)<<endl;
	return 0;
}
