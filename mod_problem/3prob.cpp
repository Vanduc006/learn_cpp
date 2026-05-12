#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll factor(ll n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factor(n-1);
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
    ll mod = pow(10,9) + 7;
    ll tich=1;
    for (int i=1; i <= n; i++) {
        // ll value = i % mod;
        // cout << factor(value) << endl;
        tich *= i % mod;
        tich %= mod;
        cout << tich << endl;
    }
}