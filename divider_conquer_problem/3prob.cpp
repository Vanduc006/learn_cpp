#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int mod = 1e9+7;

ll binpow(ll n, ll k) {
    if (k == 1) return n;
    ll a = binpow(n, k/2);
    if (k%2 == 0) {
        return a*a;
    } else {
        return a*a*n;
    }
}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cout << binpow(2, n-1); // 2^(n-1)
}