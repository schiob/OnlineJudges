#include <cmath>
#include <cstdio>
#include <stdlib.h> 
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    int n;
    string line;
    cin >> n;
    while(n--){
        cin >> line;
        bool flag = false;
        for(int i = 1 ; i < line.length()-1 ; i++){
            if(abs(line[i]-line[i-1]) != 
abs(line[line.length()-1-i]-line[line.length()-i])){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "Not Funny\n";
        }
        else{
            cout << "Funny\n";
        }
    }
    return 0;
}
