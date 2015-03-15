#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	int n, c1, c2, m1, m2;
	cin >> n;
	while(n != 0){
		cin >> c1 >> c2;
		for(int i = 0 ; i < n ; i++){
			cin >> m1 >> m2;
			if(m1 == c1 || m2 == c2)
				cout << "divisa\n";
			else if(m1 < c1){
				if(m2 < c2)
					cout << "SO\n";
				else
					cout << "NO\n";
			}
			else{
				if(m2 < c2)
					cout << "SE\n";
				else
					cout << "NE\n";
			}
		}
		cin >> n;
	}
	return 0;
}