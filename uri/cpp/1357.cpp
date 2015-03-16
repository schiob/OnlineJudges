#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>

using namespace std;

int main(){
	int n;
	char op;
	string bra;
	cin >> n;
	while(n != 0){
		cin >> op;
		if(op == 'S'){
			string row1 = "", row2 = "", row3 = "";
			while(n--){
				char d;
				cin >> d;
				if(d == '1'){
					row1.append("*. ");
					row2.append(".. ");
					row3.append(".. ");
				}
				else if(d == '2'){
					row1.append("*. ");
					row2.append("*. ");
					row3.append(".. ");
				}
				else if(d == '3'){
					row1.append("** ");
					row2.append(".. ");
					row3.append(".. ");
				}
				else if(d == '4'){
					row1.append("** ");
					row2.append(".* ");
					row3.append(".. ");
				}
				else if(d == '5'){
					row1.append("*. ");
					row2.append(".* ");
					row3.append(".. ");
				}
				else if(d == '6'){
					row1.append("** ");
					row2.append("*. ");
					row3.append(".. ");
				}
				else if(d == '7'){
					row1.append("** ");
					row2.append("** ");
					row3.append(".. ");
				}
				else if(d == '8'){
					row1.append("*. ");
					row2.append("** ");
					row3.append(".. ");
				}
				else if(d == '9'){
					row1.append(".* ");
					row2.append("*. ");
					row3.append(".. ");
				}
				else if(d == '0'){
					row1.append(".* ");
					row2.append("** ");
					row3.append(".. ");
				}
			}
			cout << row1.substr(0, row1.size()-1) << endl;
			cout << row2.substr(0, row2.size()-1) << endl;
			cout << row3.substr(0, row3.size()-1) << endl;
		}
		else{
			string row1, row2, trash, res = "";
			getline(cin, trash);
			getline(cin, row1);
			getline(cin, row2);
			getline(cin, trash);
			for(int i = 0 ; i < n ; i++){
				if(row1.substr(i*3, 2) == "*."){
					if(row2.substr(i*3, 2) == ".."){
						res.append("1");
					}
					else if(row2.substr(i*3, 2) == "*."){
						res.append("2");
					}
					else if(row2.substr(i*3, 2) == ".*"){
						res.append("5");
					}
					else if(row2.substr(i*3, 2) == "**"){
						res.append("8");
					}
				}
				else if(row1.substr(i*3, 2) == "**"){
					if(row2.substr(i*3, 2) == ".."){
						res.append("3");
					}
					else if(row2.substr(i*3, 2) == ".*"){
						res.append("4");
					}
					else if(row2.substr(i*3, 2) == "*."){
						res.append("6");
					}
					else if(row2.substr(i*3, 2) == "**"){
						res.append("7");
					}
				}
				else if(row1.substr(i*3, 2) == ".*"){
					if(row2.substr(i*3, 2) == "*."){
						res.append("9");
					}
					else{
						res.append("0");
					}
				}
			}
			cout << res << endl;
		}
		cin >> n;
	}
	return 0;
}
