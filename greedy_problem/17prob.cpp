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
    int a[n];
    for (int i=0; i < n; i++) {
        int value; cin >> value;
        a[i] = value;
    }
    sort(a, a+n);
    ll t1 = a[0] * a[1]; ll t2 = a[n-1] * a[n-2];
    ll t3 = t2 * a[n-3]; // 3L
    ll t4 = t1 * a[n-1]; // 2N 1L
    cout << max({t1, t2, t3, t4});
}