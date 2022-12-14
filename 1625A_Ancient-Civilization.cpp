#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    int n ,l;
    cin >> n >> l;
    vector<bitset<35>> bt(n);
    for(int i = 0;i<n;i++){
      int it;
      cin >> it;
      bt[i] = it;
    }
    int cnt[35][2] = {0};
    for(int i = 0;i<n;i++){
      for(int j = 0;j<l;j++){
        cnt[j][bt[i][j]]++;
      }
    }
    bitset<35> ans;
    for(int i = 0;i<l;i++){
      ans[i] = (cnt[i][1] > cnt[i][0]);
    }
    cout << ans.to_ulong() << '\n';
  }
  return 0;
}
