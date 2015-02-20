#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int t, n, a;
	cin >> t;
	for(int i = 1 ; i <= t ; i++){
		int max = 0;
		cin >> n;
		while(n--){
			cin >> a;
			max = a > max ? a : max;
		}
		cout << "Case " << i << ": " << max << endl;
	}
	return 0;
}