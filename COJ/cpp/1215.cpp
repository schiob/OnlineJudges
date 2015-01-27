#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

string cloc(bool bin[], string cas){
	string res = "Case " + cas + ": ";
	int tam[] = {2, 4, 3, 4, 3, 4};
	int inter = 0;

	for(int i = 0 ; i < 6 ; i++){
		int num = 0;
		for(int j = 0 ; j < tam[i] ; j++){
			num += ( bin[inter++] * pow(2.0, tam[i] - j -1));
		}
		ostringstream ss;
		ss << num;
		if(i%2 == 0 && i != 0){
			res += ":" + ss.str();
		}
		else{
			res += ss.str();
		}
	}
	return res;

}

int main(){
	int n;
	cin >> n;
	bool res[20];
	for(int i = 0 ; i < n ; i++){
		string s = "";
		cin >> s;
		int aux = 0;
		for(int j = 0 ; j < 20 ; j++){
			int nextP = s.find_first_of(")", aux);
			if(nextP - aux != 1){
				res[j] = true;
			}
			else{
				res[j] = false;
			}
			aux = nextP + 1;
		}
		ostringstream ss;
		ss << i+1;
		cout << cloc(res, ss.str()) << endl;
	}
	return 0;
}
