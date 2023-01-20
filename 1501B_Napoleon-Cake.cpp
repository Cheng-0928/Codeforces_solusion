#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())
 
using namespace std;
 
void sol(){
    int n;
    cin >> n;
    vector<int> d(n+1, 0);
    for(int i = 1;i<=n;i++){
        int a;
        cin >> a;
        int small = max(0LL,min(1LL,a)), big = max(0LL,i-a);
        d[i]-= small;d[big]+=small;
    }
    int pre = 0;
    for(int i = 0;i<n;i++){
        pre+=d[i];
        cout << max(0LL,min(1LL,pre)) << ' ';
    }
    cout << '\n';
}
 
signed main()
{
    Cheng0928
    int t;
    cin >> t;
    while(t--) sol();
    return 0;
}
