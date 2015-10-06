#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <cstdlib>
#include <cctype>
#include <bitset>
#include <sstream>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <iomanip>
#include <utility>
#include <fstream>
#define INF 1000000000000
#define MAX 1000000
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<vi> vivi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;

unsigned long long int powermod(unsigned long long int base, unsigned long long int exponent) {
    if (base < 1 || exponent < 0 || 1000000007 < 1){
        return -1;
    }
    unsigned long long int result = 1;
    while(exponent > 0){
       if((exponent % 2) == 1){
           result = (result * base) % 1000000007;
       }
       base = (base * base) % 1000000007;
       exponent = (exponent / 2);
    }
    return result;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    unsigned long long int n;
    cin >> n;
    unsigned long long int r = powermod(3, n*3);
    unsigned long long int dif = powermod(7, n);
    if(r < dif){
        cout << 1000000007 - (dif - r) << '\n';
    }
    else{
        cout << r-(dif) <<'\n';
    }

    return 0;
}