#include <iostream>
#include <string>
#include <cstdio>
#include <sstream>

using namespace std;

int main(){
	int N, B, H, W, p, a, min = 1000000;
	while(scanf("%d %d %d %d\n", &N, &B, &H, &W) != EOF){
		for(int i = 0 ; i < H ; i++){
			scanf("%d\n", &p);
			stringstream ss;
			string s;
			if(p*N > B || p*N > min){
				getline(cin, s);
				continue;
			}
			getline(cin, s);
			ss << s;
			for(int j = 0 ; j < W ; j++){
				ss >> a;
				if(a >= N){
					if(p*N < min){
						min = p*N;
					}
					break;
				}
			}
		}
		if(min > B){
			cout << "stay home\n";
		}
		else{
			cout << min << endl;
		}
		min = 1000000;
	}
	return 0;
}