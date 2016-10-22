#include <iostream>
using namespace std;

#define MAX 100000
#define INF 100000000

int main(){
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n, cont = 0;
  int arr[MAX][3];
  while(cin >> n && n){
    cont++;
    for(int i = 0 ; i < n ; i++){
      cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    arr[0][0] = INF;
    arr[0][2] += arr[0][1];
    for(int i = 1 ; i < n ; i++){
      arr[i][0] += min(arr[i-1][0], arr[i-1][1]);
      arr[i][1] += min(arr[i][0], min(arr[i-1][0], min(arr[i-1][1], arr[i-1][2])));
      arr[i][2] += min(arr[i][1], min(arr[i-1][1], arr[i-1][2]));
    }
    cout << cont << ". " << arr[n-1][1] << '\n';

  }
  return 0;
}
