#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    int n;
    string s;
    cin >> n;
    while(n--){
        int cont = 0;
        cin >> s;
        for(int i = 0, j = s.length()-1 ; i < j 
; i++){
            cont += abs(s[i] - s[j]);
            
            j--;
        }
        cout << cont << '\n';
    }
    return 0;
}
