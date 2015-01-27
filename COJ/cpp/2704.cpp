#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[50] = {0};
int arr2[50] = {0};
int c = 0;

bool chec(int &n){
	for(int i = 0 ; i < c ; i++){
		if(arr[i] % n == 0){
			return false;
		}
	}
	arr[c] = n;
	c++;
	return true;
}

bool chec2(int &n){
	for(int i = 0 ; i < c ; i++){
		if(n % arr2[i] == 0){
			return false;
		}
	}
	arr2[c] = n;
	c++;
	return true;
}

int main(){
	int n, cont1 = 0, cont2 = 0;
	cin >> n;
	int list[n];
	for(int i = 0 ; i < n ; i++){
		cin >> list[i];
	}
	vector <int> vec (list, list + sizeof(list) / sizeof(int));
	sort(vec.begin(), vec.end());

	for(int i = n-1 ; i >= 0 ; i--){
		if(vec.at(i) == 1 || chec(vec.at(i))){
			cont1++;
		}
	}
	c = 0;
	for(int i = 0 ; i < n ; i++){
		if(vec.at(i) == 1){
			cont2++;
		}
		else if(chec2(vec.at(i))){
			cont2++;
		}
	}
	if(cont2 > cont1){
		cout << cont2 << endl;
	}
	else{
		cout << cont1 << endl;
	}
	return 0;
}
