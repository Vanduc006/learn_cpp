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

    int n; cin >> n;
    ll tong=0;
    ll mod= pow(10,9)+7;

    for (int i=0; i < n; i++) {
        ll value; cin >> value;
        tong += value % mod;
        tong %= mod;
    }

    cout << tong % mod;
}