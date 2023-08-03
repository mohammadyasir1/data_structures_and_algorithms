#include <iostream>
using namespace std;

int globalVar = 19;//dont use global var because it's mutable

void fun1(int& i){
	cout<<globalVar<<" in fun1 "<<endl;
	globalVar++;
	cout<<i<<endl;
}

void fun2(int& i){
	cout<<globalVar<<" in fun2 "<<endl;

	globalVar++;
	cout<<i<<endl;
}


int main(){
	cout<<globalVar<<" in main "<<endl;
	int i=5;
	cout<<i<<endl;
	fun1(i);
	fun2(i);

}