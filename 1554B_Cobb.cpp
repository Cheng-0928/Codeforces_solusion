#include <iostream>
#include <vector>
#define int long long
using namespace std;

signed main() {
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int &it : v) cin >> it;
    int ans = -2000000;
    for(int i = max(0LL, n-2*k-1); i<n;i++){
      for(int j = i+1;j<n;j++){
        ans = max(ans, (i+1)*(j+1) - k*(v[i] | v[j]));
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
