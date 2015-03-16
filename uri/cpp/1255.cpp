#include <iostream>
#include <string>
#include <cstdio>
#include <locale>
#include <map>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	getline(cin,s);
	while(n--){
		getline(cin, s);
		locale loc;
		map<char, int> m;
		for(string::iterator it = s.begin() ; it != s.end() ; it++){
			if(isalpha(*it, loc)){
				if(isupper(*it, loc)){
					m[tolower(*it, loc)]++;
				}
				else m[*it]++;
			}
		}
		int max=0;
		string maxL = "";
		for(map<char, int>::iterator it = m.begin() ; it != m.end() ; it++){
			if(it->second > max){
				maxL = it->first;
				max = it->second;
			}
			else if(it->second == max){
				maxL += it->first;
			}
		}
		cout << maxL << endl;
	}
	return 0;
}
