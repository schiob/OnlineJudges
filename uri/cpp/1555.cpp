#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>

using namespace std;

int main(){
	int n, x, y;
	cin >> n;
	while(n--){
		cin >> x >> y;
		int raf = pow(3*x,2) + pow(y,2);
		int bet = 2* pow(x, 2) + pow(5*y, 2);
		int car = -100*x + pow(y,3);
		if(raf > bet){
			if(raf > car){
				cout << "Rafael ganhou\n";
			}
			else{
				cout << "Carlos ganhou\n";
			}
		}
		else if(bet > car){
			cout << "Beto ganhou\n";
		}
		else{
			cout << "Carlos ganhou\n";
		}
	}
	return 0;
}