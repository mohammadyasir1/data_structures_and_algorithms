#include <iostream>
using namespace std;

bool reachDestination(int sx, int sy, int dx, int dy) {

	// if reach the destination base case
	if(sx == dx && sy == dy)
		return true;

	// edge case
	if(sx > dx || sy > dy)
		return false;

	// recursive call
	return dx > dy ? reachDestination(sx, sy, dx-dy, dy) : reachDestination(sx, sy, dx, dy-dx);


}

int main() {

	int sx, sy, dx, dy;

	cout<<"enter the source and destination where you want to reach: ";
	cin>>sx>>sy>>dx>>dy;

	bool ans = reachDestination(sx, sy, dx, dy);

	if(ans)
		cout<<"True\n";
	else
		cout<<"False\n";


	return 0;
}