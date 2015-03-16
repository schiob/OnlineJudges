#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>
#include <vector>

using namespace std;

int find(int val, vector<int> v){
	for(unsigned int i = 0 ; i < v.size() ; i++){
		if(v[i] == val) return static_cast<int>(i);
	}
	return -1;
}

bool max(int val, vector<int> v){
	int max = 0;
	for(unsigned int i = 0 ; i < v.size() ; i++){
		if(v[i] > max) max = v[i];
	}
	return val == max;
}

int main(){
	int n;
	string s;
	while(cin >> n){
		bool que = true, sta = true, pri = true, imp = false;
		vector<int> v;
		int op, val;
		for(int i = 0 ; i < n ; i++){
			cin >> op >> val;
			if(imp) continue;
			if(op == 1){
				v.push_back(val);
			}
			if(op == 2){
				int inx = find(val, v);
				if(inx == -1){
					imp = true;
					continue;
				}
				if(val == v.front() && v.size() > 1){
					sta = false;
				}
				if(val == v.back() && v.size() > 1){
					que = false;
				}
				if(val != v.front() && v.size() > 1){
					que = false;
				}
				if(val != v.back() && v.size() > 1){
					sta = false;
				}
				if(!max(val, v)){
					pri = false;
				}
				v.erase(v.begin()+inx);
			}
		}
		if(imp) cout << "impossible" << endl;
		else if(que && !sta && !pri) cout << "queue" << endl;
		else if(!que && sta && !pri) cout << "stack" << endl;
		else if(!que && !sta && pri) cout << "priority queue" << endl;
		else if(que || sta || pri) cout << "not sure" << endl;
		else cout << "impossible" << endl;
	}
	return 0;
}