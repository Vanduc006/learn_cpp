#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n; int m;
int a[1001][1001];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};


bool max(int i, int j) {
    for (int k=0; k < 8; k++) {
        int i1=i+dx[k];
        int j1=j+dy[k];
        if (a[i][j] <= a[i1][j1]) {
            return false;
        }
    }
    return true;
}

void print() {
    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            // cin >> a[i][j];
            cout << a[i][j] << " ";
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

    int count=0;

    for (int i=0; i < n;i++) {
        for (int j=0; j < m; j++) {
            if (max(i, j)) {
                count++;
            }
        }
    }

    cout << count;


}