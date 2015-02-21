#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int z = 1 ; z <= t ; z++){
		int max = 0, a;
		string s;
		vector<string> urls;
		for(int i = 0 ; i < 10 ; i++){
			cin >> s >> a;
			if(a > max){
				max = a;
				urls.clear();
				urls.push_back(s);
			}
			else if(a == max){
				urls.push_back(s);
			}
		}
		cout << "Case #" << z << ":"<< endl;
		for(vector<string>::iterator it = urls.begin() ; it != urls.end() ; ++it){
			cout << *it << endl;
		}
	}
	return 0;
}