#include <iostream>

using namespace std;

int main(){
	int n, k, in, total=0;
	cin >> n >> k;
	while(n--){
		cin >> in;
		if(in < 6-k){
			total++;
		}
	}
	cout << total / 3 << endl;
	return 0;
}