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

    int n; cin >> n;
    int a[n];
    // int b[n];
    for (int &x : a) cin >> x;
    sort(a, a+n);
    ll sum=0;
    for (int i=0; i < n; i++) {
        if (a[i] > sum + 1) {
            cout << sum+1;
            return 0;
        };
        sum += a[i];
    }
    // for (int x : b) cout << x << " ";
    cout << sum+1;
}