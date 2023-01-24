#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define SIZE(a) signed(a.size())

using namespace std;


void sol(){
    int n, q;
    cin >> n >> q;
    vector<pair<int,int>> a;// x, t
    int sum = 0;
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        a.push_back({x,0});
        sum+=x;
    }
    pair<int,int> change = {0, -1};
    for(int i = 1;i<=q;i++){
        int t;
        cin >> t;
        if(t == 1){
            int p, x;
            cin >> p >> x;
            p--;
            if(a[p].second < change.second){
                sum+=(x-change.first);
            }
            else{
                sum+=(x-a[p].first);
            }
            a[p] = {x, i};
        }
        else{
            int x;
            cin >> x;
            change = {x, i};
            sum = x*n;
        }
        cout << sum << '\n';
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
