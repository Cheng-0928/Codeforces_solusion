#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int n = int(s.size()) * 2;
    int l = 0, r = n-1, i = 0;
    vector<char> ans(n);
    while(l<=r){
      ans[l] = s[i];ans[r] = s[i];
      l++;r--;i++;
    }
    for(int i = 0;i<n;i++) cout << ans[i];
    cout << '\n';
  }
  return 0;
}
