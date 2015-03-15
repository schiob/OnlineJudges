#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int k, n, min = 0, in, count = 0;
	cin >> k >> n;
	int c = k-n;
	while(k--){
		cin >> in;
		if(k == c){
			min = in;
		}
		if(in >= min && in != 0){
			count++;
		}
		else{
			break;
		}
	}
	cout << count << endl;
	return 0;
}