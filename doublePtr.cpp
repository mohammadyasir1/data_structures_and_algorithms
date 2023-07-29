#include <iostream>
using namespace std;

void update(int **p){
	// p=p+1;
	// No change

	// *p=*p+1;
	// change in p


	**p=**p+1;
	// change in i value
}


int main(){
	int i=19;
	int* p=&i;
	int** p1=&p;

	// cout<<"p = "<<p<<endl;
	// cout<<"p1 = "<<*p1<<endl;

	// cout<<"getting the value of \"i\" usign three ways."<<endl;
	// cout<<i<<endl;
	// cout<<*p<<endl;
	// cout<<**p1<<endl;


	// cout<<&i<<endl;
	// cout<<p<<endl;
	// cout<<*p1<<endl;

	// cout<<&p<<endl;
	// cout<<p1<<endl;
	
	cout<<endl;
	cout<<"before "<<i<<endl;
	cout<<"before "<<p<<endl;
	cout<<"before "<<p1<<endl;
	update(p1);
	cout<<"after "<<i<<endl;
	cout<<"after "<<p<<endl;
	cout<<"after "<<p1<<endl;



	return 0;
}