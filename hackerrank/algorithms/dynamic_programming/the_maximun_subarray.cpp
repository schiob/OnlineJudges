#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        int sum_pos = 0, max_sum = 0, sum_act = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
            if(arr[i] > 0){
                sum_pos += arr[i];
            }
            
            int val = sum_act + arr[i];
            if(val > 0){
                sum_act = val;
            }
            else{
                sum_act = 0;
            }
            
            if(sum_act > max_sum){
                max_sum = sum_act;
            }
            
        }
        if(max_sum > 0 || sum_pos > 0)
            cout << max_sum << " " << sum_pos << '\n';
        else
            cout << arr[0] << " " << arr[0] << '\n';
    }
    return 0;
}