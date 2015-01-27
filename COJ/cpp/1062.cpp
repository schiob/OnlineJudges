#include <iostream>
#include <vector>

using namespace std;

int checkLaser(int altura, vector<int> arr){
	int cont = 0;
	bool cut = false;
	for(int i=0 ; i < arr.size() ; i++){
		if(arr[i] < altura && !cut){
			cut = true;
			cont++;
		}
		else if(arr[i] >= altura){
			cut = false;
		}
	}
	return cont;
}

int main(){
	int a, c;
	while(cin>>a>>c && (a && c)){
		int res = 0;
		vector<int> arr(c);
		for(int i = 0 ; i < c ; i++){
			cin >> arr[i];
		}
		for(int i = a ; i >= 0 ; i--){
			res += checkLaser(i, arr);
		}
		cout << res << endl;
	}

	return 0;
}
