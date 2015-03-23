#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
	long long a, b, c;
	const double PI = 3.1415926535897;
	while(scanf("%lld %lld %lld", &a, &b, &c) != EOF){
		long double hp = (a+b+c) / 2.0;
		long double aT = sqrt(hp*(hp-a)*(hp-b)*(hp-c));
		long double r = PI * pow((2*aT)/(a+b+c+0.0), 2);
		long double s = (PI * pow( ((a*b*c*1.0)/ sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c))) , 2.0) )-aT;
		aT -= r;
		printf("%.4Lf %.4Lf %.4Lf\n", s, aT, r);
	}
	return 0;
}