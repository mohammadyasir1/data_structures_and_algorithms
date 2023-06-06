#include <iostream>
using namespace std;

int getSum(int arr[], int size){
	int sum=0;
	for(int i=0; i<size; i++){
		sum+=arr[i];
	}
	return sum;
}


int main(){
	int size;
	cin>>size;
	int num[100];
	
	for(int i=0; i<size; i++){
		cin>>num[i];
	}
	int ans = getSum(num,size);
	cout<<"sum of arr is "<<ans<<endl;

	return 0;
}
