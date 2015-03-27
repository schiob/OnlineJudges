#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <sstream>
#include <ctype.h>

using namespace std;

int main(){
	string line;
	while(getline(cin, line)){
		stringstream ss(line);
		string w;
		int cont = 0;
		bool dif = false;
		ss >> w;
		char c = tolower(w[0]), ac;
		while(ss >> w){
			ac = tolower(w[0]);
			if(ac == c && !dif){
				dif = true;
				cont++;
			}
			else{
				if(c != ac)dif = false;
				c = ac;
			}
		}
		cout << cont << endl;
	}
	return 0;
}