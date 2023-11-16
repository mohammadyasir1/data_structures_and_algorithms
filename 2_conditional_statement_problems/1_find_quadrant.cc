#include <iostream>
using namespace std;

void quadrant(int x, int y){
	if(x>0 && y>0){
		cout<<"1st quadrant";
	}else if(x<0 && y>0){
		cout<<"2nd quadrant";
	}else if(x<0 && y<0){
		cout<<"3rd quadrant";
	}else if(x>0 && y<0){
		cout<<"4th quadrant";
	}else if(x==0 && (y>0 || y<0)){
		cout<<"y-axis";
	}else if(y==0 && (x>0 || x<0)){
		cout<<"x-axis";
	}else{
		cout<<"origin";
	}

}


int main(){
	int x,y;
	cout<<"enter x,y axis: ";
	cin>>x>>y;
	quadrant(x,y);
	return 0;
}
