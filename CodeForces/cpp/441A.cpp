#include <iostream>
#include <string>
#include <cstdio>
#include <sstream>

using namespace std;

int main(){
	int c, v, cont;
	cin >> c >> v;
	stringstream ss;
	for(int j = 1; j < c ; j++){
		int id, val;
		cin >> id;
		while(id--){
			cin >> val;
			if(val < v){
				cont++;
				ss << j << " ";
				while(id){
					cin >> val;
					id--;
				}
			}
		}
	}
	int id, val;
	cin >> id;
	while(id--){
		cin >> val;
		if(val < v){
			cont++;
			ss << c;
			while(id){
				cin >> val;
				id--;
			}
		}
	}

	cout << cont << endl;
	if(cont){
		string s;
		getline(ss, s);
		cout << s << endl;
	}

	return 0;
}
