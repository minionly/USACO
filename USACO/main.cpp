#include <bits/stdc++.h>
using namespace std;
#define endl '\n' 

const int sz = 1e6 + 5;
long long a[sz], f[sz];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // freopen("main.inp","r",stdin);
    // freopen("main.out","w",stdout);

    int n, k;
    cin>>n>>k;

    for(int i=1;i<=n;++i){
        cin>>a[i];
    }

    fill(f, f+sz, 1e9);
    f[0] = 0;

    for(int j=1;j<=k;++j){
        for(int i=1;i<=n;++i){
            if(j >= a[i]){
                f[j] = min(f[j], f[j - a[i]] + 1);
            }
        }
    }

    cout<<(f[k] == 1e9 ? -1 : f[k]);

    return 0;
}

/**
 * https://cses.fi/problemset/task/1634
*/
