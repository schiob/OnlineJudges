#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int res;
	double n, pa, pb, dif;
	double g1, g2;
	cin >> n;
	while(n--){
		cin >> pa >> pb >> g1 >> g2;
		dif = pb-pa;
		g1 = g1/ 100.0;
		g2 = g2/ 100.0;
		for(int i = 1; i < 101 ; i++){
			pa += floor(pa*g1);
			pb += floor(pb*g2);
			dif = pb-pa;
			if(dif < 0){
				res = i;
				break;
			}
		}
		if(dif >= 0){
			cout << "Mais de 1 seculo." << endl;
		}
		else{
			cout << res << " anos." << endl;
		}
	}
	return 0;
}