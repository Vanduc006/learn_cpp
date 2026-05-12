#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // (A+B)%C = ((A%C) + (B%C)) % C ; - *
    // (A/B)%C = ((A%C) + (B^-1%C)) % C

    // Tinh den dau chia du den dayy
    int n;
    cin >> n;
    int mod = 1000000007;
    ll tong=0;
    for (int i=0; i < n; i++) {
        ll value; cin >> value;
        tong += value % mod;
        tong %= mod;
    }

    cout << tong % mod << endl;

}