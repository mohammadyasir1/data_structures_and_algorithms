#include <bits/stdc++.h>

using namespace std;


long dist(pair<int, int>p1, pair<int, int>p2) {
	long dist = ((long)((long)p1.first - p2.first)) * (p1.first - p2.first) + ((long)((long)p1.second - p2.second) * (p1.second - p2.second));
	return dist;
}

long minDist(vector<pair<int, int>> pts, int n) {

	long mini = LONG_MAX;
	for(int i=0; i<n; i++) {

		for(int j=i+1; j<n; j++) {

			mini = min(mini, dist(pts[i], pts[j]));
		}
	}

	return mini;
}


bool compare(pair<int, int>a, pair<int, int>b) {
	return a.second < b.second;
}


long closestToStrip(vector<pair<int, int>> strip, long d) {
	sort(strip.begin(), strip.end(), compare);

	long mini = d;

	for(int i=0; i<strip.size(); i++) {

		for(int j=i+1; j<strip.size(); j++) {

			long tmp = strip[j].second - strip[i].second;

			tmp *= tmp;

			if(tmp >= mini)
				break;
			else
				mini = min(mini, dist(strip[i], strip[j]));
		}
	}

	return mini;

}


long findClosest(vector<pair<int, int>>	sorted, int n) {
	if(n <= 3)
		return minDist(sorted, n);

	int mid = n/2;

	pair<int, int> midPoint = sorted[mid];

	int left = 0, right = 0;

	vector<pair<int, int>> sortedLeft(mid + 1);

	vector<pair<int, int>> sortedRight(n - mid - 1);

	for(int i=0; i<n; i++) {

		if(i < sortedLeft.size())
			sortedLeft[left++] = sorted[i];
		else
			sortedRight[right++] = sorted[i];
	}

	long leftDist = findClosest(sortedLeft, mid + 1);
	long rightDist = findClosest(sortedRight, n - mid - 1);

	long distance = min(leftDist, rightDist);


	vector<pair<int, int>> strip;


	for(int i=0; i<n; i++) {
		long tmp = abs(sorted[i].first - midPoint.first);

		tmp *= tmp;

		if(tmp < distance)
			strip.push_back(sorted[i]);
	}

	return min(distance, closestToStrip(strip, distance));
}


long closestPair(pair<int, int> *coordinates, int n) {
	vector<pair<int, int>> sortedX(n);

	for(int i=0; i<n; i++)
		sortedX[i] = coordinates[i];

	sort(sortedX.begin(), sortedX.end());

	return findClosest(sortedX, n);
}

int main() {

	// vector<pair<int, int>> p = {{1, 2}, {2, 3}, {3, 4}, {5, 6}, {2, 1}};
	vector<pair<int, int>> p = {{0, 0}, {-3, -4}, {6, 4}};
    int n = sizeof(p) / sizeof(p[0]); 
    cout << "The smallest distance is " << findClosest(p, n)<<endl; 
    return 0; 


	return 0;
}