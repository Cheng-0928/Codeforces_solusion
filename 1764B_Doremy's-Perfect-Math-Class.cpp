#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int gcd(int a, int b){
    if(b == 0) return a;
    
    return gcd(b, a%b);
}
 
signed main() {
  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> v;
    int g = 0;
    for(int i = 0;i<n;i++){
        int it;
        cin >> it;
        g = gcd(g, it);
        v.push_back(it);
        
    }
    int ans = v[n-1]/g;
    cout << ans << '\n';
  }
  return 0;
}
