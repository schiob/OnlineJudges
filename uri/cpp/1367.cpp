#include <iostream>
#include <string>
#include <cstdio>
#include <locale>
#include <map>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n){
		char p;
		int val, res=0, tiem=0;
		string ver;
		map<char, int> m;
		while(n--){
			cin >> p >> val >> ver;
			if(ver == "incorrect"){
				m[p] += 20;
			}
			if(ver == "correct"){
				res++;
				tiem += val + m[p];
			}
		}
		cout << res << " " << tiem << endl;
		cin >> n;
	}
	return 0;
}