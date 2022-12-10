#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int q;cin >> q;
  while(q--){
    int l,r,k;
    cin >> l >> r >> k;
    k%=(r-l+1);
    rotate(s.begin()+l-1, s.begin()+r-k, s.begin() + r);
    
  }
  cout << s << '\n';
  return 0;
}
