#include <bits/stdc++.h>
using namespace std;

string stringSum(string& num1, string& num2) {
	

	//getting digits from num to n
	int n1 = num1.length()-1;//starting from backward size [left]
	int n2 = num2.length()-1;

	int carry = 0; //initialize carry with 0

	string ans; //to store ans in string


	// here n1 and n2 are indexed

	//checking if both n1 and n2 condition is valid or not
	while(n1 >= 0 || n2 >= 0) {

		if(n1 < 0) {
			//if only n2 exist
			ans.push_back(((num2[n2]-48 + carry) % 10) + 48);
			carry = (num2[n2]-48 + carry) / 10;
			n2--;

		}else if(n2 < 0) {
			//if only n1 exist
			ans.push_back(((num1[n1]-48 + carry) % 10) + 48);
			carry = (num1[n1]-48 + carry) / 10;
			n1--;

		}else {
			//when both the digits are exist like
			//1 2 3
			//  7 8

			// here 3,8 in pair and 2,7 is in pair means both digits are exist


			//getting remiander and adding 48 to convert int to string
			ans.push_back(((num1[n1]-48 + num2[n2]-48 + carry) % 10) + 48); 

			carry = (num1[n1]-48 + num2[n2]-48 + carry) / 10; //getting carry
			n2--;
			n1--;
		}

	}


	//in case if there is some carry left
	if(carry)
		ans.push_back(carry+48);

	//after all just reverse the string to get the final ans
	reverse(ans.begin(), ans.end());

	//return the ans
	return ans;

}

int main() {
	string n1, n2;
	cin>>n1>>n2;
	cout<<stringSum(n1,n2)<<endl;
	return 0;
}