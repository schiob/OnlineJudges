#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		string car;
		int y = 0, ind = 26;
		vector<string> v;
		for(int j = 0 ; j < 52 ; j++){
			cin >> car;
			v.push_back(car);
		}
		for(int j = 0 ; j < 3 ; j++){
			int cha = v.at(ind).at(0);
			 if(cha >= 50 && cha <=  57){
				 y += cha - 48;
				 ind = ind - 1 - (10 - (cha - 48));
			 }
			 else{
				 y += 10;
				 ind--;
			 }
		}
		if((y-1) <= ind){
			cout << "Case " << i << ": " << v.at(y-1) << endl;
		}
		else{
			cout << "Case " << i << ": " << v.at(26+(y-1-ind)) << endl;
		}
	}
	return 0;
}
