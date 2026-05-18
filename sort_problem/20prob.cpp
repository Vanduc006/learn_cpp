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
    for (int &x : a) cin >> x;
    sort(a, a+n);
    // for (int x : a) cout << x << " ";
    int count=0;
    for (int i=0; i < n; i++) {
        if (a[i] - a[i-1] > 1) {
            count += a[i] - a[i-1] + 1;
        }
    }
    cout << count;
}