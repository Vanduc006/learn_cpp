#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[100][100];
int n; int m;
int s; int t;int u; int v;

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

void update(int i, int j) {
    a[i][j] = 0;
    for (int k=0; k < 8; k++) {
        int i1=i+dx[k];
        int j1=j+dy[k];

        if (i1 >= 0 && i1 < n && j1 >=0 && j1 < m && a[i1][j1] == 1) {
            update(i1, j1);
            u = i1;
            v = j1;
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

    cin >> s >> t >> u >> v;
    --s; --t; --u; --v;
    int res1 = u; int res2 = v;
    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i=s; i < n; i++) {
        for (int j=t; j < m; j++) {
            // cin >> a[i][j];
            if (a[i][j] == 1) {
                update(i, j);
            }
        }
    }

    if (res1 == u && res2 == v) cout << "YES";
    else cout << "NO";
}