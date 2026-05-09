#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Data segment, global scope
int a[1005][1005];
ll pre[1005][1005];

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; int m; cin >> n >> m;

    for (int i=1; i <= n; i++) {
        for (int j=1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i=1; i <= n; i++) {
        for (int j=1; j <= m; j++) {
            pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + a[i][j];
        }
    }

    int q; cin >> q;
    while (q--) {
        int h1; int h2; int c1; int c2;
        cin >> h1 >> h2 >> c1 >> c2;

        cout << pre[h2][c2] - pre[h1-1][c2] - pre[h2][c1-1] + pre[h1-1][c1-1] << endl;
    }
}