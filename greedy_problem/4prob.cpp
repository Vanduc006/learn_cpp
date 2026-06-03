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

    int n; int k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a+n);
    // for (int x : a) cout << x;
    int s1=0;
    int s2=0;
    for (int i=n-1; i >= n-k; i--) {
        // cout << a[i];
        s1 += a[i];
    };
    for (int i=0; i < n-k; i++) {
        // cout << a[i];
        s2 += a[i];
    }
    cout << s1-s2;
}