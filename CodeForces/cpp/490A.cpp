#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, c1=0, c2=0, c3=0, temp;
	cin >> n;
	vector<int> chil1(n);
	vector<int> chil2(n);
	vector<int> chil3(n);
	for(int i = 1 ; i <= n ; i++){
		cin >> temp;
		if(temp == 1){
			chil1[c1] = i;
			c1++;
		}
		else if(temp == 2){
			chil2[c2] = i;
			c2++;
		}
		else if(temp == 3){
			chil3[c3] = i;
			c3++;
		}
	}
	temp = min(c1, c2);
	temp = min(temp, c3);
	cout << temp << endl;
	for(int i = 0 ; i < temp ; i++){
		cout << chil1[i] << " " << chil2[i] << " " << chil3[i] << endl;
	}
	return 0;
}