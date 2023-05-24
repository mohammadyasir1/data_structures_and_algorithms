//check given triangle is valid or not

#include <iostream>
using namespace std;

int main(){
	int x,y,z;
	cout<<"enter x,y and z: ";
	cin>>x>>y>>z;

	if(x+y>z || y+z>x || z+x>y){
		cout<<"triangle is valid";
	}else{
		cout<<"triangle is not valid";
	}

	return 0;
}

