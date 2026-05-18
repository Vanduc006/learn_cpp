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

    int n; int k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a+n);
    int count=0;
    // int next_group=1;
    for (int i=0; i < n; i++) {
        if (abs(a[i] - a[i+1]) <= k) {
            continue;
        } else count++;
    }
    cout << count;

}