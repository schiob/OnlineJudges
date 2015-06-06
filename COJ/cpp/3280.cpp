#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>

using namespace std;

int nextTri(long long int x){
	return floor(((sqrt((8.0*x)+1)-1)/2.0) +1);
}

long long int T(int n){
	return (n*(n+1))/2;
}

int main(){
	long long int sum;
	scanf("%lld", &sum);
	while(sum != 0){
		int nexT = nextTri(sum);
		printf("%lld %d\n", T(nexT)-sum, nexT);
		scanf("%lld", &sum);
	}
	return 0;
}