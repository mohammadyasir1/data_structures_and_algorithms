//all about char arrays and strings
#include <iostream>
#include <vector>
using namespace std;

char toLowerCase(char ch) {
	if(ch >='a' && ch <='z') {
		return ch;
	} else {
		char temp = ch - 'A' + 'a';
		return temp;
	}
}

bool isPalindrome(char name[], int n) {
	int s=0;
	int e=n-1;
	while(s<=e) {
		if(toLowerCase(name[s]) != toLowerCase(name[e])) {
			return 0;//false
		} else {
			s++;e--;
		}
	}
	return 1;//true
}

//reverse the input char string
void rev(char name[], int n) {
	int s=0;
	int e=n-1;

	while(s<e) {
		swap(name[s++], name[e--]);
	}
}

//getting length of char
int getLength(char name[]) {
	int count=0;
	for(int i=0; name[i] != '\0'; i++) {
		count++;
	}
	return count;
}

//getting maximum occurring character
char getMaxOccChar(string s) {
	int arr[26]={0};
	//array for count of char
	for(int i=0; i<s.length(); i++) {
		char ch = s[i];
		int num = -1;

		//when input string comes only in lowercase
		num = ch - 'a';

		
		//lowercase
		
		//if(ch >= 'a' && ch <= 'z') {
		//	num = ch - 'a';
		//} else {//uppercase
		//	num = ch = 'A';
		//}
		arr[num]++;
	}

	//find max occ char
	int m = -1, ans=0;//m for max
	for(int i=0; i<26; i++) {
		if(m < arr[i]) {
			ans =i;
			m = arr[i];
		}
	}

	return 'a'+ans;
}

string replaceSpaces(string s) {
	string temp = "";//with temporary var
	for(int i=0; i<s.length(); i++) {
		if(s[i]==' ') {
			temp.push_back('@');
			temp.push_back('1');
			temp.push_back('9');
		} else {
			temp.push_back(s[i]);
		}
	}
	return temp;
}

int main() {
	//char name[20];
	//cout<<"enter your name: ";
	//cin>>name;
	//cout<<"your name is "<<name<<endl;
	//int len = getLength(name);
	//cout<<"length of your name is "<<len<<endl;
	//rev(name,len);
	//cout<<"reverse of your name is "<<name<<endl;
	//cout<<"is palindrome or not? "<<isPalindrome(name,len)<<endl;
	//cout<<"character -> "<<toLowerCase('y')<<endl;
	//cout<<"character -> "<<toLowerCase('N')<<endl;
	string s;
	getline(cin,s);
	//cout<<getMaxOccChar(s)<<endl;
	cout<<replaceSpaces(s)<<endl;
	return 0;
}
