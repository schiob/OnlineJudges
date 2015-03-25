#include <iostream>
#include <string>
#include <cstdio>
#include <map>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	map<string, string> mp;
	while(m--){
		string a, b;
		cin >> a >> b;
		mp[a] = b;
	}
	while(--n){
		string w;
		cin >> w;
		map<string, string>::iterator it = mp.find(w);
		if(it == mp.end()){
			cout << w << " ";
		}
		else if(it->second.size() < w.size()){
			cout << it->second << " ";
		}
		else{
			cout << w << " ";
		}
	}
	string w;
	cin >> w;
	map<string, string>::iterator it = mp.find(w);
	if(it == mp.end()){
		cout << w << endl;
	}
	else if(it->second.size() < w.size()){
		cout << it->second << endl;
	}
	else{
		cout << w << endl;
	}
	return 0;
}
