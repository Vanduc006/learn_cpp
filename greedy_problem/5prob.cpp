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
    int b[n];
    for (int i=0; i < n; i++) b[i]=a[i];
    sort(b, b+n);

    for (int i=0; i < n; i++) {
        if (i == 0 || i == n-1) {
            if (a[i] == b[i]) continue;
            else {
                cout << "NO";
                return 0;
            }
        } else {
            // cout << a[i] << " " << b[n-i-1] << endl;
            if (a[i] == b[n-i-1]) continue;
            else {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}