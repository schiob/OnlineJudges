#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	int t, n, m;
	scanf("%d", &t);
	for(int i = 0 ; i < t ; i++){
		scanf("%d %d", &n, &m);
		printf("%d\n", (1 + ((n - 3) / 3)) * (1 + ((m - 3) / 3)));
	}
	return 0;
}