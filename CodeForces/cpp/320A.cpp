#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	string s;
	int cont4 = 0;
	bool fine = true;
	cin >> s;
	for(unsigned int i = 0 ; i < s.size() ; i++){
		if(s[i] == '4'){
			if(i == 0){
				cout << "NO\n";
				fine = false;
				break;
			}
			cont4++;
			if(cont4 > 2){
				cout << "NO\n";
				fine = false;
				break;
			}
		}
		else if(s[i] == '1'){
			cont4 = 0;
		}
		else{
			cout << "NO\n";
			fine = false;
			break;
		}
	}
	if(fine) cout << "YES\n";
	return 0;
}
