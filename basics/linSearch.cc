#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
	for(int i=0; i<size; i++){
		if(arr[i]==key){
			return 1;
		}
	}
	return 0;

}

int main(){
	int size;
	cin>>size;

	int num[100];

	//get arr elem
	for(int i=0; i<size; i++){
		cin>>num[i];
	}

	cout<<"enter key you want to find ";
	int key;
	cin>>key;
	bool found = search(num,size,key);
	if(found){
		cout<<"present"<<endl;
	}else{
		cout<<"not present"<<endl;
	}
	return 0;
}
	
