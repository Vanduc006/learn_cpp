#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int mod = 1e9+7;

struct matran{
    ll a[100][100];
    int n;
    friend matran operator * (matran x, matran y) {
        matran res;
        res.n = x.n;
        // cout << res.n << endl;
        for (int i=0; i < res.n; i++) {
            for (int j=0; j < res.n; j++) {
                res.a[i][j] = 0;
                for (int k=0; k < res.n; k++) {
                    res.a[i][j] = (res.a[i][j] + x.a[i][k] * y.a[k][j]) % mod;
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

    int n; int k; cin >> n >> k;

    matran x;
    x.n = n;

    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            cin >> x.a[i][j];
        }
    }
    // x.a[0][0]=1;
    // x.a[0][1]=1;
    // x.a[1][0]=1;
    // x.a[1][1]=0;

    matran res = binpow(x, k);
    // cout << res.a[0][1] << endl;
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            cout << res.a[i][j] << " ";
        }
        cout << endl;
    }
}