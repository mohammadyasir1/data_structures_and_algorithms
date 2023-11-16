#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int salary(int basic, char grade){
	double hra, da, pf;
	
	hra = 0.2*basic;
	da = 0.5*basic;
	pf = 0.11*basic;

	if(grade == 'A'){
		return round(basic+hra+da+1700-pf);
	}else if(grade == 'B'){
		return round(basic+hra+da+1500-pf);
	}else{	
		return round(basic+hra+da+1300-pf);
	}

}


int main(){
	int basic;
	char grade;
	cout<<"enter your basic salary: ";
	cin>>basic;
	cout<<"enter your grade: ";
	cin>>grade;

	cout<<salary(basic, grade);

	return 0;
}
