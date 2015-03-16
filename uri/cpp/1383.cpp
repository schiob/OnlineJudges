#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		char ma[9][9];
		bool flag = true;
		for(int j = 0 ; j < 9 ;j++){
			string s = "123456789";
			for(int k= 0; k< 9 ;k++){
				cin >> ma[j][k];
				if(s.find(ma[j][k]) == string::npos){
					flag = false;
				}
				else{
					s.replace(s.find(ma[j][k]), 1, "*");
				}
			}
		}
		if(flag){
			for(int j = 0 ; j < 9 ;j++){
				string s = "123456789";
				for(int k= 0; k< 9 ;k++){
					if(s.find(ma[k][j]) == string::npos){
						flag = false;
						break;
					}
					else{
						s.replace(s.find(ma[k][j]), 1, "*");
					}
				}
				if(!flag){
					break;
				}
			}
		}
		if(flag){
			for(int j = 0 ;j < 3 ;j++){
				if(!flag) break;
				for(int k = 0 ; k < 3 ;k++){
					if(!flag) break;
					string s = "123456789";
					for(int l = 0; l<3 ; l++){
						if(!flag) break;
						for(int m = 0 ;m < 3 ;m++){
							if(s.find(ma[l+(j*3)][m+(k*3)]) == string::npos){
								flag = false;
								break;
							}
							else{
								s.replace(s.find(ma[l+(j*3)][m+(k*3)]), 1, "*");
							}
						}
					}
				}
			}
		}
		cout << "Instancia " << i << endl;
		if(!flag){
			cout << "NAO\n\n";
		}
		else{
			cout << "SIM\n\n";
		}
	}
	return 0;
}
