#include <iostream>
using namespace std;

void printPtr(int* p){
	cout<<*p<<endl;//gives val
	cout<<p<<endl;//give address

}

void update(int* p){
	// we cannot change the address using update function like this
	// but we can chage the value
	// p+=1; // for address not update outside the funt
	// cout<<"inside function ptr = "<<p<<endl;
	*p+=1;
}

int getSum(int arr[], int n){
	int sum=0;
	for(int i=0; i<n; i++){
		sum+=arr[i];
	}
	return sum;
}

int main(){
	
	//address of poi
	// int num = 19;
	//int a = num;
	// int* ptr = &num;
	// cout<<"address of num var is "<<ptr<<endl;
	// cout<<"value of num is "<<*ptr<<endl;



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

	// int i = 3;
	// int* t = &i;
	// cout<<(*t)++<<endl;
	// *t = *t+1;
	// cout<<*t<<endl;
	
	// cout<<"before t "<<t<<endl;
	// t=t+1;
	// cout<<"after t "<<t<<endl;

	// int y[3] = {1,2,3};
	
	// cout<<"-> "<<&y[0]<<endl;//add of 0th index
	// cout<<"-> "<<&y<<endl;//add of 0th index
	// cout<<"-> "<<y<<endl;//add of 0th index

	// int* p = &y[0];
	// cout<<"-> "<<p<<endl;
	// cout<<"-> "<<*p<<endl;
	// cout<<"-> "<<&p<<endl;


	// int ar[10];
	// ar = ar+1;//error
	
	// int* ptr = &ar[0];
	// cout<<ptr<<endl;
	// ptr = ptr+1;
	// cout<<ptr<<endl;


	// dont declare like this
	// char* char1[6] = "abcde"; 



	// int arr[3] = {1,2,3};
	// char ch[3] = "my";
	// cout<<arr<<endl; //give 0th index address
	// cout<<ch<<endl; //print entire content
	// cout funct implented diffrently for int and char


	// char* ptr = &ch[0];
	// cout<<"ptr -> "<<ptr<<endl; // print entire string for char

	// int* ptr1 = &arr[0];
	// cout<<"ptr1 -> "<<ptr1<<endl;

	// char temp = 'y';
	// char* t = &temp;
	// cout<<t<<endl;


	// ptr with function********************
	int n = 19;
	int* ptr = &n;

	// printPtr(ptr);

	// cout<<"before ptr = "<<ptr<<endl;
	// update(ptr);
	// cout<<"after ptr = "<<ptr<<endl;

	cout<<"before ptr val = "<<*ptr<<endl;
	update(ptr);
	cout<<"after ptr val = "<<*ptr<<endl;


	int arr[10] = {1,2,3,4,5,6,4,8,8,10};
	//in function arrays starting index address goes the benefits of this is
	// we can give array in part check below
	cout<<"sum of arr is "<<getSum(arr+5,5)<<endl;


	return 0;
}
