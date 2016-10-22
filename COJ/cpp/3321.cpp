#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

#define NMAX 1000000
#define MOD 10000000000
typedef unsigned long long ull;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(0);
    vector<ull> p(NMAX+1, 1);
    int t, n;
    string ans;
    for(ull i = 2 ; i <= NMAX; i++){
      if(p[i]){
        for(ull j = i*i; j <= NMAX ; j += i){
          p[j] = 0;
        }
      }
    }
    for(ull i = 2 ; i <= NMAX ; i++){
      if(p[i]){
        p[i] = p[i-1];
        p[i] = (p[i]*i) % MOD;
      }
      else{
        p[i] = p[i-1];
      }
    }

    cin >> t;
    while(t--){
      cin >> n;
      stringstream ss;
      ss << p[n];
      ss >> ans;

      if(n > 29){
        for(int i = 0 ; i < 10-ans.length() ; i++){
          cout << '0';
        }
      }
      cout << ans << '\n';

    }

    return 0;
}
