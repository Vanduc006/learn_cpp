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
    for (int i=0; i < n; i++) cin >> a[i];

    ll pre[n];
    for (int i=0; i < n; i++) {
        if (i == 0) {
            pre[i] = a[i];
        }
        else pre[i] = pre[i-1] + a[i];
    }

    for (int x : pre) cout << x << " ";
}