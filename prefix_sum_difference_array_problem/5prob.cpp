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

    int n; int q; cin >> n >> q;
    int a[n];
    for (int &x : a) cin >> x;

    int diff[n+n];
    for (int i=0; i < n; i++) {
        if (i == 0) diff[i] = a[i];
        else diff[i] = a[i] - a[i-1];
    }

    // for (int x : diff) cout << x << " ";

    while(q--) {
        int l; int r; int k;
        cin >> l >> r >> k;
        // cout << l << r << k << endl;
        diff[l] += k;
        diff[r+1] -= k;
    }

    int pre[n];
    for (int i=0; i < n; i++) {
        if (i == 0) pre[i] = diff[i];
        else pre[i] = pre[i-1] + diff[i];
    }

    for (int x : pre) cout << x << " ";
}