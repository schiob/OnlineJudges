#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>

using namespace std;

int main(){
	int n, d, in;
	cin >> n >> d;
	while(n != 0 && d != 0){
		bool flag = false;
		int al[100] = {0};
		for(int j = 0 ; j < d ;j++){
			for(int i = 0 ; i < n ; i++){
				cin >> in;
				al[i] += in;
			}
		}
		for(int i = 0 ; i < n ; i++){
			if(al[i] == d){
				flag = true;
				break;
			}
		}
		if(flag){
			cout << "yes\n";
		}
		else{
			cout << "no\n";
		}
		cin >> n >> d;
	}
	return 0;
}