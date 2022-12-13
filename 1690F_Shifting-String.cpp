#include <bits/stdc++.h>
using namespace std;
#define int long long
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
int gcd(int a, int b){
  if(!a) return b;
  return gcd(b%a,a);
}
int lcm(int a, int b){
  if(!a) return b;if(!b) return a;
  return a*b/gcd(a,b);
}
 
signed main() {
  IO
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> p(n);
    for(int &it : p) {cin >> it; it--;}
    int ans = 0;
    bitset<200> visited = 0;
    for(int i = 0;i<n;i++){
      
      string t; t = s;
      if(visited[i]) continue;
      int pos = i, cnt = 1;
      vector<int> v;
      while(!visited[pos]){
        v.push_back(pos);
        t[pos] = s[p[pos]];
        visited[pos] = 1;
        pos = p[pos];
      }
      while(t!=s){
        cnt++;
        string c = t;
        int jn = v.size();
        for(int j = 0;j<jn;j++){
          c[v[j]] = t[v[(j+1)%jn]];
        }
        t.clear();t = c;
      }
      ans = lcm(ans, cnt);
      
    }
    cout << ans << '\n';
  }
  return 0;
}
