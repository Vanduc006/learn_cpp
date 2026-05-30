#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int c[1005][1005];
int n;
int x[1005]; // ans
int visited[1005]; // danh dau
int ans=INT_MAX;
int cmin=1e9;


void backtracking(int i, int d) {
    for (int j=1; j <= n; j++) {
        if (!visited[j]) {
            x[i] = j; // luu index
            visited[j]  = 1;
            int prev = x[i-1];
            int current = x[i];
            d += c[prev][current]; // chi phi
            if (i == n) {
                ans = min(ans, d + c[1][x[i]]);
            } else if (d + (n-i+1)*cmin < ans) { 
                // current distance + needed*min
                backtracking(i+1, d);
            } 
            // else {
            //     backtracking(i+1, d);
            // }
            visited[j]=0;
            d -= c[prev][current];
            // cout << c[prev][current] << endl;
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i=1; i <= n; i++) {
        for (int j=1; j <= n; j++) {
            cin >> c[i][j];
            if (c[i][j]) cmin=min(cmin, c[i][j]);
            // cout << c[i][j];
        }
    }

    cout << cmin << endl;
    x[1]=1;
    visited[1]=1;
    backtracking(2, 0);
    cout << ans;
}