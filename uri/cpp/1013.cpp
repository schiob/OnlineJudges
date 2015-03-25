#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

double comp(int a, int b){
	return (a+b+(abs(a-b)))/2;
}

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if(comp(a,b) == a){
		if(comp(a,c) == a){
			cout << a << " eh o maior\n";
		}
		else cout << c << " eh o maior\n";
	}
	else{
		if(comp(b,c) == b) cout << b << " eh o maior\n";
		else cout << c << " eh o maior\n";
	}
	return 0;
}