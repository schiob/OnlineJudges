#include <iostream>
#include <string>

using namespace std;

int count_words(string l){
	int w = 0;
	bool in_let = false;
	for(unsigned int i = 0; i < l.length(); i++){
		if((l[i] >= 65 && l[i] <= 90) || (l[i] >= 97 && l[i] <= 122)){
			if(!in_let){
				in_let = true;
			}
		}
		else{
			if(in_let){
				w++;
				in_let = false;
			}
		}
	}
	if(in_let){
		w++;
	}
	return w;
}

int main(){
	string line;
	while(getline(cin, line)){
		cout << count_words(line) << endl;
	}
	return 0;
}