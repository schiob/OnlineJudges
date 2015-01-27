#include <iostream>
#include <math.h>

using namespace std;

bool isTri(unsigned long long int &n){
	unsigned long long int tri = (unsigned long long int) pow((2*n), .5);
	if(n * 2 == tri*(tri+1)){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	unsigned long long int n;
	cin >> n;
	while(n != 0){
		if(isTri(n)){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
		cin >> n;
	}
	return 0;
}
