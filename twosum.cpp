#include <iostream>
using namespace std;

int main () {
	int nums[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	int target;
	cin >> target;

	int find = 0;
	for (int i = 0; i<n; i++) { 
		for (int k = i + 1; k<n; k++) {
			find = nums[i] + nums[k];
			if (find == target) {
				cout << "[" << i << "," << k << "]";
				return 0;
			}
		}
	}
return 0;
}
