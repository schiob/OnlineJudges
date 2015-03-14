#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int a, b;
	float c, sum=0;
	for(int i = 0 ; i < 2 ; i ++){
		scanf("%d %d %f", &a, &b, &c);
		sum += c*b;
	}
	printf("VALOR A PAGAR: R$ %.2f\n", sum);
	return 0;
}