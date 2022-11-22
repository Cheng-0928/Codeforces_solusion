#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << int(s[n-1] - 'a') + 1 << '\n';
  }
  return 0;
}
