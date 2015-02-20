#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	int t, n, m;
	scanf("%d", &t);
	for(int i = 0 ; i < t ; i++){
		scanf("%d %d", &n, &m);
		if(n == m)
			printf("%s\n", "=");
		else if(n < m)
			printf("%s\n", "<");
		else
			printf("%s\n", ">");
	}
	return 0;
}