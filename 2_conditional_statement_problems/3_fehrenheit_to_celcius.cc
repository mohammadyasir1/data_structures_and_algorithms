#include <iostream>
using namespace std;

int main(){
	
	int s, e, w;
	//where,
	//s=start, e=end, w=step
	//formula-> cel = (s-32)*5/9

	int celcius=0;

	cout<<"enter start, end and step: ";
	cin>>s>>e>>w;

	while(s<=e){
		celcius = (s-32)*5/9;
		cout<<s<<" "<<celcius<<endl;
		s+=w;
	}

	return 0;
}
