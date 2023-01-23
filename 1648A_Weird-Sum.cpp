#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define SIZE(a) signed(a.size())

using namespace std;

const int SIZE = 100000;

int f(vector<int> vec){
    int n = SIZE(vec);
    sort(vec.begin(), vec.end());
    int mul = -(n-1);
    int ret = 0;
    for(int it : vec){
        ret+=it*mul;
        mul+=2;
    }
    return ret;
}

void sol(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> x(SIZE+1), y(SIZE+1);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            int c;
            cin >> c;
            x[c].push_back(j);y[c].push_back(i);
        }
    }
    int ans = 0;
    for(int i = 1;i<=SIZE;i++){
        ans+= f(x[i]) + f(y[i]);
    }
    cout << ans << '\n';

}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--)*/ sol();
    return 0;
}
