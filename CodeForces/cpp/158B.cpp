#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n, in, g2 = 0, g3 = 0, g1 = 0, count = 0;
	cin >> n;
	while(n--){
		cin >> in;
		if(in == 4) count++;
		else if(in == 3){
			if(g1 > 0){
				g1--;
				count++;
			}
			else{
				g3++;
			}
		}
		else if(in == 1){
			if(g3 > 0){
				g3--;
				count++;
			}
			else{
				g1++;
			}
		}
		else if(in == 2){
			if(g2 > 0){
				g2--;
				count++;
			}
			else{
				g2++;
			}
		}
	}
	int g1r = g1/4;
	g1 = g1%4;
	if(g2 > 0 && g1 < 3 && g1 > 0){
		g2 = 0;
		g1 = 1;
	}
	else if(g1 > 0){
		g1 = 1;
	}
	count += g1 + g1r + g2 + g3;
	cout << count << endl;
	return 0;
}