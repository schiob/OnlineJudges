#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int t;
	int arr[10];
	cout << "Lumberjacks:\n";
	cin >> t;
	while(t--){
		bool bre = false;
		cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6] >> arr[7] >> arr[8] >> arr[9];
		for(int i = 1 ; i < 9 ; i++){
			if(!(arr[i-1] < arr[i]) != !(arr[i] < arr[i+1])){
				cout << "Unordered\n";
				bre = true;
				break;
			}
		}
		if(!bre)
			cout << "Ordered\n";
	}
	return 0;
}