#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>

using namespace std;

int max(int a, int b){
	return a > b ? a : b;
}
int min(int a, int b){
	return a < b ? a : b;
}

int main(){
	int l, c, r1, r2;
	cin >> l >> c >> r1 >> r2;
	while(l != 0){
		if(l >= r1*2 + r2*2){
			if(c >= r1*2 && c >= r2*2){
				cout << "S\n";
			}
			else{
				cout << "N\n";
			}
		}
		else if(c >= r1*2 + r2*2){
			if(l >= r1*2 && l >= r2*2){
				cout << "S\n";
			}
			else{
				cout << "N\n";
			}
		}
		else{
			int minL = min(l, c), maxL = max(l, c), bigC = max(r1, r2), litC = min(r1,r2);
			if( ((litC*2)-(maxL-(bigC*2))) + ((litC*2)-(minL-(bigC*2))) <= bigC){
			//if(floor(sqrt(pow(l,2)+pow(c,2))*10) >= floor(((sqrt(pow(r1,2)+pow(r1,2)) + r1) + (sqrt(pow(r2,2)+pow(r2,2)) + r2))*10) && (l >= r1*2 && l >= r2*2 && c >= r2*2 && c >= r1*2)){
				cout << "S\n";
			}
			else{
				cout << "N\n";
			}
		}
		cin >> l >> c >> r1 >> r2;
	}
	return 0;
}