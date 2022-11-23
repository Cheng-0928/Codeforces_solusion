#include <bits/stdc++.h>
 
using namespace std;
 
void sol(){
  int n;
  cin >> n;
  vector<int> vec;
  for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(i == 0 || x != vec.back())
        {
            vec.push_back(x);
        }
    }
  int cnt = 0;
  for(int i = 0;i<vec.size();i++){
    if((i == 0 || vec[i-1] > vec[i]) && (i == vec.size()-1 || vec[i+1] > vec[i])) cnt++;
  }
  if(cnt == 1) cout << "Yes\n";
  else cout << "No\n";
}
 
 
int main(){
  int t;
  cin >> t;
  while(t--){
    sol();
  }
}
