#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <sstream>
#include <ctype.h>
#include <map>

using namespace std;

int main(){
	long long int a, b;
	cin >> a >> b;
	if(a == b){
		cout << "infinity\n";
	}
	else if(a < b){
		cout << 0 << endl;
	}
	else{
		long long int top= a-b;
		int cont=0;
		if(b == 0){
			for(long long int i = 1 ; i <= top ; i++){
				if((a-b)%i==0) cont++;
			}
		}
		else{
			long long int m=0, n=0;
			for(long long int i = b+1 ; i <= top ; i++){
				if((a-b)%i==0){
					n = m;
					m = i;
					cout << " " << m-n;
					cont++;
				}
			}
		}
		cout <<endl <<  cont << endl;
	}
	return 0;
}
