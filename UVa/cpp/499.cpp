#include <iostream>
#include <string>

using namespace std;

void set_res(int lett[]){
	int max = 0;
	string word = "";
	for(int i = 0 ; i < 26 ; i++){
		if(lett[i] == max){
			word.append(1, (char) (i+65));
		}
		else if(lett[i] > max){
			max = lett[i];
			word = (char) (i+65);
		}
	}
	for(int i = 26 ; i < 52 ; i++){
		if(lett[i] == max){
			word.append(1, (char) (i+71));
		}
		else if(lett[i] > max){
			max = lett[i];
			word = (char) (i+71);
		}
	}
	cout << word << " " << max << endl;
}

int main(){
	string line;
	while(getline(cin, line)){
		int letters[52] = {0};
		for(unsigned int i = 0 ; i < line.length() ; i++){
			char l = line[i];
			if(l >= 65 && l <= 90){
				letters[l-65]++;
			}
			else if(l >= 97 && l <= 122){
				letters[l-71]++;
			}
		}
		set_res(letters);
	}

	return 0;
}