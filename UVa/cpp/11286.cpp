#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	while(n != 0){
		map<vector<int>, int > m;
		int cont = 0, max=0;
		for(int i = 0 ; i < n ; i++){
			vector<int> vec(5);
			for(int j = 0 ; j < 5 ; j++){
				cin >> vec[j];
			}
			sort(vec.begin(), vec.end());
			m[vec]++;
		}
		for(map<vector<int>,int>::iterator it = m.begin() ; it != m.end() ; it++){
			if(it->second > max){
				max = it->second;
				cont = it->second;
			}
			else if(it->second == max){
				cont += it->second;
			}
		}
		cout << cont << endl;
		cin >> n;
	}
	return 0;
}