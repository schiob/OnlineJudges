#include <iostream>
#include <string>
#include <cstdio>
#include <map>

using namespace std;

int calc(int s, int n1, int n2, int n3){
	int res = 120;
	if(s-n1 < 0)
		res += (s-n1)+40;
	else
		res += ((s-n1)%40);
	if(n2-n1 < 0)
		res += ((n2-n1)+40);
	else
		res += ((n2-n1)%40);
	if(n2-n3 < 0)
		res += ((n2-n3)+40);
	else
		res += ((n2-n3)%40);
	return res*9;
}

int main(){
	int s, n1, n2, n3;
	scanf("%d %d %d %d", &s, &n1, &n2, &n3);
	while(s != 0 || n1 != 0 || n2 != 0 || n3 != 0){
		cout << calc(s, n1, n2, n3) << endl;
		scanf("%d %d %d %d", &s, &n1, &n2, &n3);
	}
	return 0;
}