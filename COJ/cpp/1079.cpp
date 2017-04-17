#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, t, temp, big;
	cin >> n;
	while(n--){
		cin >> t;
		vector<vector<int> > vec(t+1, vector<int>(t+1));
		for(int i = 1; i<vec.size(); i++){
			for(int j = 1; j<=i; j++){
				cin >> temp;
				if(vec[i-1][j] > vec[i-1][j-1])
					vec[i][j] = temp + vec[i-1][j];
				else
					vec[i][j] = temp + vec[i-1][j-1];
			}
		}
		big = 0;
		for(int i = 0; i<vec.size(); i++){
			if(vec[vec.size()-1][i]> big) big = vec[vec.size()-1][i];
		}
		cout << big << '\n';
	}
	return 0;
}
