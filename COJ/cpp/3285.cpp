#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	string s;
	long long int num;
	cin >> n;
	while(n--){
		cin >> num;
		cin >> s;
		int pos = num % s.length();
		if(pos != 0) cout << s.substr(s.length()-pos, pos);
		cout << s.substr(0, s.length()-pos);
		cout << endl;
	}
	return 0;
}