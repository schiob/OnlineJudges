#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i = 0 ; i < n ; i++){
		cin >> nums[i];
	}
	sort(nums.begin(), nums.end());
	for(vector<int>::iterator it = nums.begin() ; it != nums.end()-1 ; it++){
		cout << *it << " ";
	}
	cout << *nums.rbegin() << endl;

	return 0;
}