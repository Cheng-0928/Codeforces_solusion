#include <bits/stdc++.h>
#define int long long
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

void sol(){
    int n;
    cin >> n;
    vector<int> x(n);
    int a = 0;
    for(int &it : x) cin >> it;
    for(int i = 0;i < n;i++){
        cout << (a & (~x[i])) << ' ';
        a = (x[i] ^ (a & (~x[i])));
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
