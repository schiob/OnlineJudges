#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n!=0){
		int first, sec, past, act, count=0;
		bool des;
		cin >> first >> act;
		past = first;
		sec = act;
		n--;
		if(first > act) des = true;
		else des = false;
		while(--n){
			past = act;
			cin >> act;
			if(act < past){
				if(des) continue;
				else{
					count++;
					des = true;
				}
			}
			else{
				if(des){
					count++;
					des = false;
				}
				else continue;
			}
		}
		if(act > first){
			if(!des){
				count++;
				des = true;
			}
		}
		else{
			if(des){
				count++;
				des = false;
			}
		}
		if(first > sec){
			if(!des){
				count++;
				des = true;
			}
		}
		else{
			if(des){
				count++;
				des = false;
			}
		}
		cout << count << endl;
		cin >> n;
	}
	return 0;
}