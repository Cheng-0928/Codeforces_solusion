#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while(t--){
    int a[3];
    for(int &it:a) cin >> it;
    sort(a,a+3);
    cout << a[1] << '\n';
  }
  return 0;
}
