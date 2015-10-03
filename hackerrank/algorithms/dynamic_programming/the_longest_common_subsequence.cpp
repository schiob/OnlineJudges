#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> arr_n, arr_m;

void print_path(vector<vector<int> > p, int n, int m){
    if(p[n][m] == 0){
        return;
    }
    else if(p[n][m] == 2){
        print_path(p, n-1, m-1);
        cout << arr_n[n-1] << " ";
        return;
    }
    else if(p[n][m] == 1){
        print_path(p, n-1, m);
    }
    else{
        print_path(p, n, m-1);
    }
}


int main() {
    int n, m, aux;
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++){
        cin >> aux;
        arr_n.push_back(aux);
    }
    for(int i = 0 ; i < m ; i++){
        cin >> aux;
        arr_m.push_back(aux);
    }
    vector<vector<int> > c(n+1, vector<int>(m+1));
    vector<vector<int> > p(n+1, vector<int>(m+1));
    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            if(arr_n[i-1] == arr_m[j-1]){
                c[i][j] = c[i-1][j-1] + 1;
                p[i][j] = 2;
            }
            else if(c[i-1][j] >= c[i][j-1]){
                c[i][j] = c[i-1][j];
                p[i][j] = 1;
            }
            else{
                c[i][j] = c[i][j-1];
                p[i][j] = -1;
            }
        }
    }
    print_path(p, n, m);
    
    return 0;
}