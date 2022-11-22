#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a[n],s[n];
    for(int i = 0;i<n;i++) {
      cin >> a[i];
      s[i] = a[i];
    }
    sort(a, a+n);
    int b = a[n-1], sec = a[n-2];
    for(int i = 0;i<n;i++){
      cout << s[i] - (s[i] == b ? sec : b) << ' ';
    }
    cout << '\n';
    
  }
  return 0;
}
