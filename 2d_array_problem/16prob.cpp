#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n; int m; 
int a[1001][1001];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void update(int i, int j) {
    a[i][j] = 0;
    for (int k=0; k < 4; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >=0 && j1 < m && a[i1][j1] == 1) {
            update(i1, j1);
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

    cin >> n >> m;

    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int count = 0;

    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            if (a[i][j] == 1) {
                ++count;
                update(i, j);
            }
        }
    }

    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << count;
}