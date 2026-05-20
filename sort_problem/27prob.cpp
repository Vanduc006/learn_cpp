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
    int a[n]; int b[n];
    for (int &x : a) {
        cin >> x;
    }
    
    for (int i=0; i < n; i++) b[i] = a[i];
    sort(a, a+n);

    for (int x : b) {
        auto it = upper_bound(a, a+n, x);
        if (it != a+n) {
            cout << *it << " ";
        }
        else cout << "_ ";
    }
    
}
