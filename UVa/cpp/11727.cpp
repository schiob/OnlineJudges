#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int t, a, b, c;
	cin >> t;
	for(int i = 1 ; i <= t ; i++){
		cin >> a >> b >> c;
		vector<int> num;
		num.push_back(a);
		num.push_back(b);
		num.push_back(c);
		sort(num.begin(), num.end());
		cout << "Case " << i << ": " << num[1] << endl;
	}
	return 0;
}