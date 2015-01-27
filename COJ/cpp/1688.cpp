#include <iostream>
#include <string>

using namespace std;

int main(){
	int c;
	cin >> c;
	while(c != -1){
		string res = "";
		int h, w;
		switch(c){
		case 1:
			cin >> h;
			for(int i = 0 ; i < h ; i++){
				res.append(h - (i+1), ' ');
				res.append(2*i +1, '*');
				res.append("\n");
			}
			cout << res;
			break;
		case 2:
			cin >> w >> h;
			for(int i = 0 ; i < h ; i++){
				res.append(h - (i+1), ' ');
				res.append(w, '*');
				res.append("\n");
			}
			cout << res;
			break;
		case 3:
			cin >> w >> h;
			for(int i = 0 ; i < h ; i++){
				res.append(w, '*');
				res.append("\n");
			}
			cout << res;
			break;
		}
		cin >> c;
		if(c != -1){
			cout << endl;
		}
	}
	return 0;
}
