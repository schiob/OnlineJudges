#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	int n, m, c= 0, count = 0;
	cin >> n >> m;
	while(n--){
		int ac;
		cin >> ac;
		if(c+ac < m){
			c += ac;
		}
		else if(c+ac == m){
			c = 0;
			count++;
		}
		else{
			c = ac;
			count++;
		}
	}
	if(c > 0){
		count++;
	}
	cout << count << endl;
	return 0;
}