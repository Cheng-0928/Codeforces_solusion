#include <bits/stdc++.h>
//#define int long long
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int cmp_or = 0;

bool cmp(int a, int b){
    return (cmp_or | a) > (cmp_or | b);
}

void sol(){
    cmp_or = 0;
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &it : a) cin >> it;
    n = min(n, 30);
    for(int i = 0;i<n;i++){
        sort(a.begin() + i, a.end(), cmp);
        cmp_or = (cmp_or | a[i]);
    }
    for(int &it : a) cout << it << ' ';
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
