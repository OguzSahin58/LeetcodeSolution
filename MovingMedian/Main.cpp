#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


// Main idea of the problem is the keep a sliding window 
// while cleaning the backward elements 
// also handling the inside window problem 

string MovingMedian(vector<int> arr) {
	int k = arr[0];
	arr.erase(arr.begin());
	vector<int> window; 
	vector<double> medians;

	for (int i = 0; i < arr.size(); i++) {
		window.push_back(arr[i]);

		if (window.size() > k) {
			window.erase(window.begin());
		}

		vector<int> temp = window;
		sort(temp.begin(), temp.end());

		int n = temp.size();

		double median; 

		if (n % 2 == 0) {
			median = (temp[n / 2 - 1] + temp[n / 2]) / 2.0;
		}
		else {
			median = temp[n / 2];
		}
		medians.push_back(median);	
	}
	
	string result; 

	for (int median : medians) {
		result += to_string(median) + " ";
	}
	return result;
}



int main(void) {

	cout << MovingMedian({ 3,1,3,5,10,6,4,3,1 }) << endl;
	cout << MovingMedian({ 5,2,4,6 }) << endl;
	cout << MovingMedian({ 3,0,0,-2,0,2,0,-2 }) << endl;
	cout << MovingMedian({ 3,5,3,7,5,3,1,8,9,2,4,6,8 }) << endl;
	cout << MovingMedian({ 3,1,2,3,4,2,3,1,4,2 }) << endl;
	cout << MovingMedian({ 3,1,3,-1,-3,5,3,6,7 }) << endl;
	cout << MovingMedian({ 3,-1,5,13,8,2,3,3,1 }) << endl;

	// Expected output:
	/* 
		1, 2, 3, 5, 6, 6, 4, 3
		2, 3, 4
		0, 0, 0, 0, 0, 0, 0
		5, 4, 5, 5, 5, 3, 3, 8, 8, 4, 4, 6
		1, 1.5, 2, 3, 3, 3, 2, 3, 2
		1, 2, 1, -1, -1, 3, 5, 6
		- 1, 2, 5, 8, 8, 3, 3, 3
	*/

	return 0;
}