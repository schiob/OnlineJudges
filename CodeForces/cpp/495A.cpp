#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <sstream>
#include <ctype.h>
#include <map>

using namespace std;

int main(){
	char f, s;
	cin >> f >> s;
	map<char, int> m;
	m['8'] = 1;
	m['9'] = 2;
	m['6'] = 2;
	m['0'] = 2;
	m['2'] = 2;
	m['3'] = 3;
	m['5'] = 4;
	m['7'] = 5;
	m['4'] = 3;
	m['1'] = 7;

	cout << m[f]*m[s] << endl;
	return 0;
}