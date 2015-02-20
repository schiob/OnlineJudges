#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t != 0){
		t = t%9 == 0 ? 9 : t%9;
		cout << t << endl;
		cin >> t;
	}
	return 0;
}