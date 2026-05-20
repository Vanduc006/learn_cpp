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
    int count=0;
    for (int x : a) {
        if (x != 0) {
            cout << x << " ";
            count++;
        }
    }
    while (count--) cout << 0 << " ";
}