#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;
bool compare(int x, int y) {
    return x > y;
}
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
    sort(a+1, a+n, compare);
    // for (int x : a) cout << x << " ";
    int ans=a[0];
    // int tru=n-1-k;

    for (int i=1; i < n; i++) {
        if (k) {
            k--;
            ans += a[i];
        } else {
            ans -= a[i];
        }
    }
    cout << ans;
}