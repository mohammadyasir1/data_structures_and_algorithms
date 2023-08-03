#include <iostream>
using namespace std;

inline int getMax(int& a, int& b){
	//inline func
	// inline func is same as macros because macros is also replace 
	// the line when compile the program
	// benifits is that there function call is replace with function body
	// and no extra memory usage

	return (a>b) ? a : b;//if a > b return "a" else return "b"

}

int main(){
	int a=10, b=20;
	int ans = getMax(a,b);
	cout<<ans<<endl;
	a+=10;
	b-=1;
	ans = getMax(a,b);
	cout<<ans<<endl;
	return 0;
}