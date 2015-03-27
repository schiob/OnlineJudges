#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int n, ac;
	cin >> n;
	while(n--){
		int stu, num, inx, dif = 2<<20;
		cin >> stu >> num;
		for(int i = 1 ; i <= stu ; i++){
			cin >> ac;
			if(abs(num-ac)< dif){
				dif = abs(num-ac);
				inx = i;
			}
		}
		cout << inx << endl;
	}

	return 0;
}
