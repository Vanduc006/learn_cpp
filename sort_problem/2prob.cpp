#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;

int cmp(int x, int y) {
    return abs(x) < abs(y);
}

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
    sort(a, a+n, cmp);

    for (int x : a) cout << x << " ";

}