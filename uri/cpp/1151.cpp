#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n, a = 0, b = 1, temp;
	cin >> n;
	while(--n){
		cout << a << " ";
		temp = b;
		b = a+b;
		a = temp;
	}
	cout << a << endl;
	return 0;
}