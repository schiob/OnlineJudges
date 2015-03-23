#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>
#include <stdlib.h>

using namespace std;

bool is_prime(unsigned long long n) {
    if (n <= 3) {
        return n > 1;
    }
    else if(n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    else{
        for(unsigned long long i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}

int main(){
	int n;
	unsigned long long b;
	cin >> n;
	while(n--){
		cin >> b;
		bool is = is_prime(b);
		if(is) cout << "Prime\n";
		else cout << "Not Prime\n";
	}
	return 0;
}
