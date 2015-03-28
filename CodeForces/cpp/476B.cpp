#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

void inc(vector<int> &v){
	for(unsigned int i=0; i < v.size() ;i++){
		v[i]++;
	}
}

void dec(vector<int> &v){
	for(unsigned int i=0; i < v.size() ;i++){
		v[i]--;
	}
}

void aum(vector<int> &v){
	vector<int> v2 = v;
	inc(v);
	for(unsigned int i=0; i < v2.size() ;i++){
		v.push_back(v2[i]-1);
	}
}

int main(){
	int real = 0;
	double cont=0;
	vector<int> v;
	v.push_back(0);
	string line;
	cin >> line;
	for(unsigned int i = 0 ; i < line.size() ; i++){
		if(line[i] == '+') real++;
		else real--;
	}
	cin >> line;
	for(unsigned int i = 0 ; i < line.size() ; i++){
		if(line[i] == '+') inc(v);
		else if(line[i] == '-') dec(v);
		else aum(v);
	}

	for(unsigned int i = 0 ; i < v.size() ; i++){
		if(v[i]== real) cont++;
	}
	printf("%.12f\n", cont / v.size());
	return 0;
}