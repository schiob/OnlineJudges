#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    
    for(int i = 0; i < n ; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(s[i]+k > 'z'){
                cout << 
char('a'+(s[i]+k-'z'-1)%26);
            }
            else{
                cout << char(s[i]+k);
            }
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            if(s[i]+k > 'Z'){
                cout << 
char('A'+(s[i]+k-'Z'-1)%26);
            }
            else{
                cout << char(s[i]+k);
            }
        }
        else{
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}
