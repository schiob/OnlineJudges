#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	int N, B, H, W, p, a, min = 1000000;
	while(scanf("%d %d %d %d\n", &N, &B, &H, &W)){
		for(int i = 0 ; i < H ; i++){
			scanf("%d\n", &p);
			if(p*N > B) continue;
			for(int j = 0 ; j < W ; j++){
				cin >> a;
				if(a >= N && p*N < min) min = p*N;
			}
		}
		if(min > B) cout << "stay home\n";
		else cout << min << endl;
		min = 1000000;
	}
	return 0;
}