#include <iostream>
#include <string>
#include <cstdio>
#include <map>

using namespace std;

map<int, pair<int, int> > m;

int fib(int n){
	if(n == 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else{
		map<int, pair<int, int> >::iterator it = m.find(n);
		if(it->second.first == 0){
			m[n] =  make_pair(fib(n-1)+fib(n-2), m[n-1].second +1 + m[n-2].second +1);
			return m[n].first;
		}
		else{
			return m[n].first;
		}
	}
}

int main(){
	int c, n;
	cin >> c;
	m[0] = make_pair(0,0);
	m[1] = make_pair(1,0);
	m[2] = make_pair(1, 2);
	for(int i= 0 ; i <= 39 ;i++){
		fib(i);
	}
	while(c--){
		cin >> n;
		cout << "fib(" << n << ") = " << m[n].second << " calls = " << m[n].first << endl;
	}

	return 0;
}
