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
    pair<int, int> a[n];
    for (int i=0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a+n);
    int ans = a[0].first + a[0].second;
    for (int i=1; i < n; i++) {
        ans = max(ans, a[i].first);
    }
    cout << ans;
}