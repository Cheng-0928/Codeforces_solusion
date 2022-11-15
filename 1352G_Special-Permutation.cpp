#include <iostream>
#include <deque>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    deque<int> ans = {3,1,4,2};
    if(n < 4){
      cout << -1 << '\n';
      continue;
    }
    for(int i = 5;i<=n;i++){
      if(i%2) ans.push_back(i);
      else ans.push_front(i);
    }
    for(int i = 0;i<ans.size();i++){
      cout << ans[i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
