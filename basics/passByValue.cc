#include <iostream>
using namespace std;

void dummy(int n){
	n++;
	cout<<"n is: "<<n<<endl;
}

int main(){
	int n=15;
	dummy(n);
	cout<<"main n is: "<<n<<endl;
}
