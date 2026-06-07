#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[100];

int dayso(ll n, ll k) {
    if (k == pow(2, n-1)) return n;
    if (k <= pow(2, n-1)) {
        return dayso(n-1, k);
    } else {
        return dayso(n-1, k-pow(2, n-1));
        // trai, phai giong nhau
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    a[1]=1;
    // a[2]=3;

    for (int i=2; i <= 50; i++) {
        a[i] = (a[i-1]*2) + 1;
    }

    ll n; ll k; cin >> n >> k;
    cout << dayso(n, k);

}