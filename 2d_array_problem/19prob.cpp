#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n; int m;
int a[1001][1001];
int dp[1001][1001];

// int dx[2] = {1, 0};
// int dy[2] = {0, 1};

void max_p(int i, int j, int count) {
    if (i >=0  && i < 3 && j >= 0 && j < 3) {
        if (a[i+1][j] > a[i][j+1]) {
            max_p(i+1, j, count += a[i+1][j]);
        } else max_p(i, j+1, count += a[i][j+1]);
    } else cout << count;
}

void print() {
    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // int count=a[0][0];
    // max_p(0, 0, count);

    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            cout << endl;
            print();
            if (i == 0 && j == 0) {
                dp[i][j] = a[i][j];
            } else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
            cout << max(dp[i - 1][j], dp[i][j - 1]) << endl;
        }
    }
    --m; --n;
    cout << dp[n][m];

}