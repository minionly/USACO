#include <bits/stdc++.h>
using namespace std;
#define endl '\n' 

const int sz = 5005;
const int mod = 998244353;
int f[sz], a[sz];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);

    int n, k;
    cin>>n>>k;

    f[0] = 1;
    while(n--){
        char c;
        int x;
        cin>>c>>x;

        if(c == '+'){
            for(int i=k;i>=x;--i){
                f[i] = (f[i] + f[i - x]) % mod;
            }
        }
        else{
            for(int i=x;i<=k;++i){
                f[i] = (f[i] - f[i-x] + mod) % mod;
            }
        }

        cout<<f[k]<<endl;
    }

    return 0;
}

/**
 * https://atcoder.jp/contests/abc321/tasks/abc321_f
*/