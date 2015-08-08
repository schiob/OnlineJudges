#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <vector>

using namespace std;

int main(){
	int n;
	string x;
	cin >> n;
	getline(cin, x);
	while(n--){
		string noi = " ";
		getline(cin, x);
		noi.append(x);
		noi.append(" ");
		getline(cin, x);
		while(x != "what does the fox say?"){
			string toF = x.substr(x.find_last_of(' '), x.length()-x.find_last_of(' ')).append(" ");
			size_t a = noi.find(toF);
			while(a != string::npos){
				noi.replace(a, toF.length(), " ");
				a = noi.find(toF);
			}
			getline(cin, x);
		}
		cout << noi.substr(1, noi.size()-2) << endl;
	}
	return 0;
}