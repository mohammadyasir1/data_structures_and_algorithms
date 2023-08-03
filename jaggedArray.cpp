#include <iostream>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;

	// int m=3, n=3;


	int** arr = new int* [m];//where m is row


	//allocating heap memory
	for(int i=0; i<m; i++){
		arr[i] = new int[n[i]];//where n is cols
		// arr[i][j] = rand() % 10;        
	}

	for(int i=0; i<m; i++){
		for(int j=0; j<n[i]; j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0; i<m; i++){
		for(int j=0; j<n[i]; j++){
			cout<<arr[i][j]<<"\t";
		}cout<<endl;
	}

	//deallocatting heap memory
	for(int i=0; i<m; i++){
		delete [] arr[i];
	}

	delete [] arr;

	return 0;

}