#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; int m; cin >> n >> m;
    int a[n]; 
    int b[m];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    sort(a, a+n);
    // for (int x : a) cout << x;
    for (int x : b) {
        auto it = lower_bound(a, a+n, x);
        if (*it > x) it--;
        if (*it != 0) {
            cout << *it << endl;
        } else cout << "-1" << endl;
        a[it-a] = 0;
    }
}