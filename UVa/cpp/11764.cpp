#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int t, n, tor, nex;
	cin >> t;
	for(int i = 1 ; i <= t ; i++){
		int up = 0, dn = 0;
		cin >> n;
		cin >> tor;
		n--;
		while(n--){
			cin >> nex;
			if(tor < nex) up++;
			else if(tor > nex) dn++;
			tor = nex;
		}
		cout << "Case " << i << ": " << up << " " << dn << endl;
	}
	return 0;
}