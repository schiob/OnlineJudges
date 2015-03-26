#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int k, a, b, v, cont=0;
	cin >> k >> a >> b >> v;
	while(a>0){
		if(b!= 0){
			if(b >= k-1){
				a -= (k*v);
				b -= k-1;
				cont++;
			}
			else{
				a -= ((b+1)*v);
				b=0;
				cont++;
			}
		}
		else{
			cont += (a/v);
			if(a%v != 0){
				cont++;
			}
			a = 0;
		}
	}
	cout << cont << endl;
	return 0;
}