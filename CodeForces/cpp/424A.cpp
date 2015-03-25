#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	int n, stan=0, sit=0;
	string s;
	cin >> n;
	cin >> s;
	for(unsigned int i = 0 ; i < s.size() ; i++){
		if(s[i] =='x') sit++;
		else stan++;
	}
	if(stan == sit){
		cout << 0 << endl << s << endl;
	}
	else if(stan > sit){
		int dif = n/2-sit;
		cout << dif << endl;
		while(dif){
			for(unsigned int i = 0 ; dif > 0 ; i++){
				if(s[i] =='X'){
					dif--;
					s.replace(i, 1, "x");
				}
			}
		}
		cout << s << endl;
	}
	else{
		int dif = n/2-stan;
		cout << dif << endl;
		while(dif){
			for(unsigned int i = 0 ; dif > 0 ; i++){
				if(s[i] =='x'){
					dif--;
					s.replace(i, 1, "X");
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}