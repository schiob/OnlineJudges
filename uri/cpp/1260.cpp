#include <iostream>
#include <string>
#include <cstdio>
#include <map>

using namespace std;

int main(){
	int n;
	string g, s;
	cin >> n;
	getline(cin, s);
	getline(cin, s);
	for(int i = 1 ; i < n ; i++){
		getline(cin, s);
		map<string, int> m;
		double count = 0;
		while(s != ""){
			count++;
			m[s]++;
			getline(cin, s);
		}
		for(map<string, int>::iterator it = m.begin() ; it != m.end() ; it++){
			printf("%s %.4f\n", it->first.c_str(), it->second/count*100);
		}
		printf("\n");
	}
	map<string, int> m;
	double count = 0;
	while(getline(cin, s)){
		count++;
		m[s]++;
	}
	for(map<string, int>::iterator it = m.begin() ; it != m.end() ; it++){
		printf("%s %.4f\n", it->first.c_str(), it->second/count*100);
	}

	return 0;
}
