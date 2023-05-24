#include <iostream>
#include <math.h>
using namespace std;

int decTobin(int n){
	int ans=0;
	int i=0;

	while(n!=0){
		int bits=n&1;
		ans = (bits*pow(10,i))+ans;
		n=n>>1;
		i++;
	}
	return ans;
}


int main(){
	
	int n;
	cout<<"enter a number: ";
	cin>>n;

	if(n<0){
		//if n is negative
		n=n*(-1);
		int ans=decTobin(n);

		//find 2's complements		
		//1's complements is
		int new_ans=(~ans);

		//2's complements is
		new_ans=new_ans+1;

		cout<<"binary of "<<-n<<" = "<<new_ans<<endl;
	}else{
		//if n is positive
		int ans=decTobin(n);
		cout<<"binary of "<<n<<" = "<<ans<<endl;
	}
	return 0;
}

