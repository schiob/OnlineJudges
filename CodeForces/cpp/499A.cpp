#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	int n, x, c = 0, l, r;
	cin >> n >> x;
	int ac = 1;
	while(n--){
		cin >> l >> r;
		if(ac < l){
			c += (l-ac)%x;
		}
		c += (r-l +1);
		ac = r+1;
	}
	cout << c << endl;
	return 0;
}