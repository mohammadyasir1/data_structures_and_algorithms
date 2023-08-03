#include <iostream>
using namespace std;

void printArr(int arr[], int n, int start=0){//default arguments start with right most
	for(int i=start; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[5]={1,2,3,4,5};
	int size=5;
	printArr(arr,size);
	printArr(arr,size,2);//3rd parameter is optional if given then use else not a problem	
	return 0;
}