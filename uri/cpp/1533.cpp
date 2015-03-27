#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int n, ac;
	cin >> n;
	while(n != 0){
		int most=0, sec=0, inds=0, indf=0;
		for(int i = 1 ; i <= n ; i++){
			cin >> ac;
			if(ac > most){
				sec = most;
				inds = indf;
				most = ac;
				indf = i;
			}
			else if(ac < most && ac > sec){
				sec = ac;
				inds = i;
			}
		}
		cout << inds << endl;
		cin >> n;
	}

	return 0;
}
