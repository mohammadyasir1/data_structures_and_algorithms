#include <iostream>
using namespace std;

void updateByVal(int n){
	n++;
}

void updateByRef(int& n){
	n++;
}

//bad practice dont do like that
//same thing is for pointer
int& func(int n){
	int num = n;
	int& ans = num;
	return ans;	
}

int main(){
	// int i = 19;
	// int& j = i;
	// cout<<i<<endl;
	// i++;
	// cout<<i<<endl;
	// j++;
	// j++;
	// cout<<i<<endl;
	// cout<<j<<endl;



	int i = 19;

	//pass by value - create a copy
	cout<<"pass by value"<<endl;

	cout<<"before "<<i<<endl;
	updateByVal(i);
	cout<<"after "<<i<<endl;

	cout<<endl;

	//pass by reference	
	cout<<"pass by reference"<<endl;
	
	cout<<"before "<<i<<endl;
	updateByRef(i);
	cout<<"before "<<i<<endl;
	
	cout<<endl;

	// func(i);

	return 0;
}