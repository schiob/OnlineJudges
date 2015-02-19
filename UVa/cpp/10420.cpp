#include <iostream>
#include <string>
#include <cstdio>
#include <map>

using namespace std;

int main(){
	string cty;
	map<string, int> m;
	int n;
	scanf("%d\n", &n);
	for(int i = 0 ; i < n ; i++){
		getline(cin, cty);
		cty.erase(cty.find(' '));
		m[cty]++;
	}
	for(map<string,int>::iterator it=m.begin(); it!=m.end(); ++it)
	    cout << it->first << " " << it->second << '\n';
	return 0;
}