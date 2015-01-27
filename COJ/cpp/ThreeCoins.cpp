#include <stdio.h>
#include <iostream>
#include <math.h>

#define PI 3.14159265359

using namespace std;

int main(){
	double d1, d2, d3, a, b, c, p, A, teta;
	while(cin >> d1 >> d2 >> d3){
		a = (d1 / 2) + (d2 / 2);
		b = (d1 / 2) + (d3 / 2);
		c = (d2 / 2) + (d3 / 2);
		p = (a + b + c) / 2;
		A = sqrt(p*(p-a)*(p-b)*(p-c));

		teta = acos(((a*a) + (b*b) - (c*c)) / (2*a*b));
		teta = teta * 180 / PI;
		A -= (PI*(pow(d1/2, 2))*teta) / 360;

		teta = acos(((a*a) + (c*c) - (b*b)) / (2*a*c));
		teta = teta * 180 / PI;
		A -= (PI*(pow(d2/2, 2))*teta) / 360;

		teta = acos(((c*c) + (b*b) - (a*a)) / (2*c*b));
		teta = teta * 180 / PI;
		A -= (PI*(pow(d3/2, 2))*teta) / 360;

		printf("%.17g\n", A);
		d1 = d2 = d3 = 0;
	}
	return 0;
}