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
    string s;
    cin >> s;
    map<int,vector<int>> mp;
    mp[0].push_back(0);
    int one = 0, zero = 0, ans = 0;
    for(int i = 0;i<n;i++){
        if(s[i] == '1') one++;
        else zero++;
        if(mp.find(one - zero) != mp.end()){
            for(int it : mp[one-zero]) ans = max(ans, i - it + 1);
        }
        mp[one - zero].push_back(i+1);

    }
    cout << ans << '\n';
}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--) */sol();
    return 0;
}
