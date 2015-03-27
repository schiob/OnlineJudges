#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <sstream>
#include <ctype.h>
#include <map>

using namespace std;

int main(){
	int n, c100=0, c50=0, c20=0, c10=0, c5=0, c2=0, c1=0;
	cin >> n;
	cout << n << endl;
	c100 = n/100;
	n = n%100;
	c50 = n/50;
	n = n%50;
	c20 = n/20;
	n = n%20;
	c10 = n/10;
	n = n%10;
	c5 = n/5;
	n = n%5;
	c2 = n/2;
	n = n%2;
	c1 = n/1;
	n = n%1;

	cout << c100 << " nota(s) de R$ 100,00\n";
	cout << c50 << " nota(s) de R$ 50,00\n";
	cout << c20 << " nota(s) de R$ 20,00\n";
	cout << c10 << " nota(s) de R$ 10,00\n";
	cout << c5 << " nota(s) de R$ 5,00\n";
	cout << c2 << " nota(s) de R$ 2,00\n";
	cout << c1 << " nota(s) de R$ 1,00\n";
	return 0;
}
