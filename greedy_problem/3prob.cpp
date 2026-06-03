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
    int a[n+1];
    for (int i=1; i < n; i++) cin >> a[i];
    sort(a, a+n);
    int ans=0;
    for (int i=1; i < n; i++) ans += a[i] * i;
    cout << ans;

}