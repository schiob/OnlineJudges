#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n != 0){
		int a, r, min = 3000;
		string p , pbue;
		while(n--){
			cin >> p >> a >> r;
			if(a-r < min){
				min = a-r;
				pbue = p;
			}
		}
		cout << pbue << endl;
		cin >> n;
	}
	return 0;
}