#include <iostream>
#include <vector>

using namespace std;

void merge(int arr1[], int n, int arr2[],int m, int arr3[]) {
	int i=0, j=0, k=0;
	while(i<n && j<m) {
		if(arr1[i] < arr2[j]) {
			arr3[k++] = arr1[i++];
		} else {
			arr3[k++] = arr2[j++];
		}
	}

	while(i<n) {
		arr3[k++] = arr1[i++];
	}

	while(j<m) {
		arr3[k++] = arr2[j++];
	}
}

void print(int arr[], int n) {
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main() {
	int n1[5]= {1,3,5,6,7};
	int n2[3]= {2,4,8};
	int n3[8]= {0};
	merge(n1,5,n2,3,n3);
	cout<<"sorted arr are => ";
	print(n3,8);
	return 0;
}
