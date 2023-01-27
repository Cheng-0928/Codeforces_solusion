#include <bits/stdc++.h>
#define int long long
#define f first
#define s second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define SIZE(a) signed(a.size())

using namespace std;


void sol(){
    //freopen("cereal.in", "r", stdin);
    //freopen("cereal.out", "w", stdout);
    string s;
    int n, k;
    cin >> n >> k;
    cin >> s;
    if(k%2){
        for(int i = 0;i<n;i++){
            if(s[i] == '0') s[i] = '1';
            else s[i] = '0';
        }
    }
    vector<int> ans(n, 0);
    for(int i = 0;i<n;i++){
        if(s[i] == '0' && k > 0){
            k--;
            s[i] = '1';
            ans[i]++;
        }
    }
    ans[n-1]+=k;
    if(k%2){
        if(s[n-1] == '0') s[n-1] = '1';
        else s[n-1] = '0';
    }
    cout << s << '\n';
    for(int it : ans) cout << it << ' ';
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
