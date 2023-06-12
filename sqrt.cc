#include <iostream>
using namespace std;

long long int sqrtInteger(int n) {
	int s=0, e=n;
	long long int m = s+(e-s)/2;
	long long int ans=-1;
	 
	 while(s<=e) {
		 long long int sqr = m*m;
		 if(sqr==n) {
			 return m;
		}

		if(sqr<n) {
			ans=m;
			s=m+1;
		} else {
			e=m-1;
		}

		m = s+(e-s)/2;
	}
	return ans;
}

double morePrecision(int n, int precision, int tempSol){
	double factor = 1;
	double ans = tempSol;

	for(int i=0; i<precision; i++){
		factor/=10;//for convert to 0.1
		
		for(double j=ans; j*j<n; j+=factor){
			ans=j;
		}
	}
	return ans;
}

int main(){
	int n=37;
	cin>>n;
	
	int tempSol = sqrtInteger(n);
	
	cout<<"ans is "<< morePrecision(n, 3, tempSol)<<endl;

	return 0;
}
