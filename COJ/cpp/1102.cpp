#include <iostream>
#include <string>

using namespace std;

int main(){
	string num;
	cin >> num;
	while(num != "0"){
		int par=0, inp=0;
		for(unsigned int i = 0 ; i < num.length() ; i++){
			if(i%2 == 0){
				par += (num[i] - '0');
			}
			else{
				inp += (num[i] -'0');
			}
		}
		if((par - inp) % 11 == 0){
			cout << num << " is a multiple of 11." << endl;
		}
		else{
			cout << num << " is not a multiple of 11." << endl;
		}
		cin >> num;
	}
	return 0;
}