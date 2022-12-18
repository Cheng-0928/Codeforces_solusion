#include <bits/stdc++.h>
#define int long long
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

void sol(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n+1);
    for(int i = 2;i<=n;i++){
        //for(int j = i+1;j<=n;j++){
        int x,y;
        cout << "or " << 1 << ' ' << i << endl;
        cin >> x;
        cout << "and " << 1 << ' ' << i << endl;
        cin >> y;
        a[i] = x+y;
        a[i] = x+y;
        //}
    }
    int x,y;
    cout << "or " << 2 << ' ' << 3 << endl;
    cin >> x;
    cout << "and " << 2 << ' ' << 3 << endl;
    cin >> y;
    a[1] = (a[2] + a[3] - x - y)/2;
    for(int i = 2;i<=n;i++){
        a[i] = a[i] - a[1];
    }
    sort(a.begin(), a.end());
    cout << "finish " << a[k] << endl;
}

signed main()
{
    Cheng0928
    sol();
    return 0;
}
