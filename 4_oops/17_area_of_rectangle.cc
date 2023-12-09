#include <iostream>
using namespace std;

class Rectangle {
	int length, breadth;

	public:
		int getArea(int l, int b) {
			this->length = l;
			this->breadth = b;
			return l*b;
		}

};

int main() {
	int length, breadth;
	cin>>length>>breadth;

	Rectangle r;
	int ans = r.getArea(length, breadth);
	cout<<"area of rectangel is "<<ans<<endl;
	return 0;
}