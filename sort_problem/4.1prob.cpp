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
    for (int i=0; i < n; i++) cin >> a[i];
    sort (a, a+n);
    int min=a[1]-a[0];
    for (int i=0; i < n - 1; i++) {
        if (a[i+1] - a[i] <= min) {
            min = a[i+1] - a[i];
        }
    }
    cout << min;

}