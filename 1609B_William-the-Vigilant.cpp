#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;


void sol(){
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    s+="  ";
    int ans = 0;
    for(int i = 0;i<n;i++){
        ans+=(s.substr(i, 3) == "abc");

    }

    while(q--){
        char c;int i;
        cin >> i >> c;
        i--;
        for(int j = max(0LL, i-2);j<=min(i+2,n-2);j++) ans-=(s.substr(j, 3) == "abc");
        s[i] = c;
        for(int j = max(0LL, i-2);j<=min(i+2,n-2);j++) ans+=(s.substr(j, 3) == "abc");
        cout << ans << '\n';
    }


}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--)*/ sol();
    return 0;
}
