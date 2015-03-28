#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <sstream>
#include <ctype.h>
#include <vector>

using namespace std;

int max_in_v(vector<int> v, unsigned int sec){
	int ma=0;
	for(unsigned int i = 0 ; i < v.size() ; i++){
		if(v[i] > ma && sec-1 != i && sec != i) ma= v[i];
	}
	if(v[sec]+v[sec-1] > ma) ma= v[sec]+v[sec-1];
	return ma;
}

int main(){
	int n, past, ac, nex, max = 2<<26;
	cin >> n >> past >> ac >> nex;
	n -= 3;
	vector<int> v;
	v.push_back(ac-past);
	v.push_back(nex-ac);
	while(n--){
		ac = nex;
		cin >> nex;
		v.push_back(nex-ac);
	}
	for(unsigned int i = 1 ; i < v.size() ; i++){
		int check = max_in_v(v, i);
		if(check < max) max = check;
	}
	cout << max << endl;
	return 0;
}
