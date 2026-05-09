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
    for (int &x : a) cin >> x;
    int diff[n];
    for (int i=0; i < n; i++) {
        if (i == 0) diff[i] = a[i];
        else diff[i] = a[i] - a[i-1];
    }

    for (int x : diff) cout << x << " ";

}