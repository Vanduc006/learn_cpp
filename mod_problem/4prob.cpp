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

    int n; int m; int k;
    cin >> n >> m >> k;
    ll mod= pow(10,k);
    ll tich=1;
    for (int i=0; i < m; i++) {
        tich *= n & mod;
        tich %= mod;
    }

    cout << tich;
}