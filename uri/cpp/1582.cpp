#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>

using namespace std;

int gcd(int a, int b){
	if(b == 0) return a;
	else return gcd(b, a%b);

}
int max(int a, int b){
	if(a >= b) return a;
	else return b;
}
int min(int a, int b){
	if(a < b) return a;
	else return b;
}

int main(){
	int x, y, z;
	while(scanf("%d %d %d", &x, &y, &z) != EOF){
		if(x > y && x > z){
			if(pow(x,2) != pow(y,2)+pow(z,2)){
				cout << "tripla\n";
			}
			else if(gcd(x, y) == 1 && gcd(x, z) == 1 && gcd(max(z,y), min(z,y)) == 1){
				cout << "tripla pitagorica primitiva\n";
			}
			else{
				cout << "tripla pitagorica\n";
			}

		}
		else if(y > x && y > z){
			if(pow(y,2) != pow(x,2)+pow(z,2)){
				cout << "tripla\n";
			}
			else if(gcd(y, x) == 1 && gcd(y, z) == 1 && gcd(max(z,x), min(z,x)) == 1){
				cout << "tripla pitagorica primitiva\n";
			}
			else{
				cout << "tripla pitagorica\n";
			}

		}
		else if(z > y && z > x){
			if(pow(z,2) != pow(y,2)+pow(x,2)){
				cout << "tripla\n";
			}
			else if(gcd(z, y) == 1 && gcd(z, y) == 1 && gcd(max(x,y), min(x,y)) == 1){
				cout << "tripla pitagorica primitiva\n";
			}
			else{
				cout << "tripla pitagorica\n";
			}
		}
		else {
			cout << "tripla\n";
		}
	}
	return 0;
}
