#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	int t, n;
	cin >> t;
	for(int i = 0 ; i < t ; i++){
		cin >> n;
		int res = (((((n*63) + 7492)*5)-498)%100)/10;
		cout << ((res<0) ? res * -1 : res )<< endl;
	}
	return 0;
}