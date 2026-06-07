#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int mod = 1e9+7;

struct matran{
    ll a[2][2];
    friend matran operator * (matran x, matran y) {
        matran res;
        for (int i=0; i < 2; i++) {
            for (int j=0; j <= 2; j++) {
                res.a[i][j] = 0;
                for (int k=0; k < 2; k++) {
                    res.a[i][j] += x.a[i][k] + y.a[k][j];
                    res.a[i][j] %= mod;
                }
            }
        }
        return res;
    }
};

matran binpow(matran x, ll n) {
    if (n == 1) return x;
    matran a = binpow(x, n/2);
    if (n%2 == 0) return a*a;
    else return a*a*x;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    matran x;
    x.a[0][0]=1;
    x.a[0][1]=1;
    x.a[1][0]=1;
    x.a[1][1]=0;

    matran res = binpow(x, n);
    cout << res.a[0][1] << endl;
}