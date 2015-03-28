#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <sstream>
#include <ctype.h>
#include <map>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	if(n %2 ==0){
		if((n/2)%m == 0) cout << n/2 << endl;
		else if((n/2)+(m-((n/2)%m)) <= n) cout << (n/2)+(m-((n/2)%m)) << endl;
		else cout << -1 << endl;
	}
	else{
		if(((n/2)+1) % m == 0) cout << (n/2)+1 << endl;
		else if(((n/2)+1)+(m-(((n/2)+1)%m)) <= n) cout << ((n/2)+1)+(m-(((n/2)+1)%m)) << endl;
		else cout << -1 << endl;
	}
	return 0;
}
