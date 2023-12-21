#include <bits/stdc++.h>
using namespace std;

// string kthChildNthGeneration(int n, long long int k)
// {
// 	// Base Condition
// 	if(n == 1 or k == 1)
// 	{
// 		return "Male";
// 	}
// 	// Parent of the Kth child of Nth generation
// 	long long int par = (k + 1)/2;

// 	// Recursively find the gender of the parent
// 	string parGender = kthChildNthGeneration(n - 1, par);

// 	// If Kth child of Nth generation is the first child of its parent
// 	if(k == 2 * par - 1)
// 	{
// 		return parGender;
// 	}
// 	// If Kth child of Nth generation is the second child of its parent
// 	else
// 	{
// 		if(parGender == "Male")
// 		{
// 			return "Female";
// 		}
// 		else
// 		{
// 			return "Male";
// 		}
// 	}
// }


bool finder(int n, long long k) {
	// first generation
	if(n == 1 || k == 1)
		return 0;


	// if kth child is even, i.e. child gender is opp to parent

	// else / n-1 -> the previous generation, 
	// k/2-> the parent's position in the previous generation
	
	if(k%2 == 0)
		return !finder(n-1, k/2);
	else
		return finder(n-1, (k+1)/2);

}

int main() {
	int n;
	long long k;
	cout<<"enter nth generation and kth child to search: ";
	cin>>n>>k;

	if(finder(n, k))
		cout<<"Female\n";
	else
		cout<<"Male\n";

	return 0;
}