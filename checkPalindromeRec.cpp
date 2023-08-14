#include <iostream>
using namespace std;

bool check(string str, int i, int j){
	// base case
	if(i>j)
		return true;

	if(str[i] !=str[j]){
		return false;
	}else{
		return check(str, i+1, j-1);
	}
}

int main(){
	string name = "abcba";
	bool isPalindrome = check(name, 0, name.length()-1);
	if(isPalindrome){
		cout<<"string is palindrome"<<endl;
	}else{
		cout<<"string is not a palindrome"<<endl;
	}
}