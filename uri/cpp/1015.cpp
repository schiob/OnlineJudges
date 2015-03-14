#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	float a, b, c, d;
	scanf("%f %f", &a, &b);
	scanf("%f %f", &c, &d);
	printf("%.4f\n", sqrt(pow(a-c,2)+pow(b-d,2)));
	return 0;
}
