#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n; int m;
int ans=0;
int a[10005][10005];

// right i, j+1
// down i+1, j

void backtracking(int i, int j) {
    if (i == m && j == n) {
        ans++;
    } if (i+1 <= m && a[i+1][j] == 1) {
        // cout << "1" << endl;
        backtracking(i+1, j);
    } if (j+1 <= n && a[i][j+1] == 1) {
        backtracking(i, j+1);
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> m >> n;
    for (int i=1; i <= m; i++) {
        for (int j=1; j <= n; j++) {
            a[i][j]=1;
        }
    }
    backtracking(1, 1);
    cout << ans;
}