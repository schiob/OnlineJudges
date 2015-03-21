#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>

using namespace std;

int main(){
	int l, c, r1, r2;
	cin >> l >> c >> r1 >> r2;
	while(l != 0){
		int x1 = r1, y1 = c-r1 , x2 = l-r2, y2 = r2;
		double cTc = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
		if(cTc >= r1+r2 && (l >= r1*2 && l >= r2*2) && (c >= r1*2 && c >= r2*2)){
			cout << "S\n";
		}
		else{
			cout << "N\n";
		}
		cin >> l >> c >> r1 >> r2;
	}
	return 0;
}
