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
    int b[n];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    sort(a, a+n);
    sort(b, b+n);

    int ans=0;
    for (int i=0; i < n; i++) ans += a[i] * b[i];
    cout << ans;
}