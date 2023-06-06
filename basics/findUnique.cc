#include <iostream>
using namespace std;

int unique(int arr[], int size){
	int ans=0;
	for(int i=0; i<size; i++){
		ans=ans^arr[i];
	}
	return ans;
}

int main(){

	int arr[6]={1,2,2,1,3};

	int uni = unique(arr,5);
	cout<<"unique in arr1 is "<<uni<<endl;

	return 0;
}
