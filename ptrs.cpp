#include <iostream>
using namespace std;

int main(){
	
	//address of poi
	int num = 19;
	//int a = num;
	int* ptr = &num;
	cout<<"address of num var is "<<ptr<<endl;
	cout<<"value of num is "<<*ptr<<endl;
					
	//cout<<"before a -> "<<a<<endl;
	//a++;
	//cout<<"after a -> "<<a<<endl;

	//cout<<"size of int is "<<sizeof(num)<<endl;
	//cout<<"size of ptr is "<<sizeof(ptr)<<endl;
	
	//cout<<"before "<<num<<endl;
	//(*ptr)++;
	//cout<<"after "<<num<<endl;

	
	//double num2 = 19.9;
	//double* ptr2 = &num2;
	//cout<<"size of double ptr is "<<sizeof(ptr2)<<endl;
	
	//double* temp = ptr2;
	//cout<<ptr2<<" - "<<temp<<endl;
	//cout<<*ptr2<<" - "<<*temp<<endl;

	int i = 3;
	int* t = &i;
	cout<<(*t)++<<endl;
	*t = *t+1;
	cout<<*t<<endl;
	
	cout<<"before t "<<t<<endl;
	t=t+1;
	cout<<"after t "<<t<<endl;
	


	return 0;
}
