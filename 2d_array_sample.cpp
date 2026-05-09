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

    int n=3; int m=3;
    int a[n][n];
    int b[m][m];
    for (int i=0; i <  n; i++) {
        for (int j=0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i=0; i < m; i++) {
        for (int j=0; j < m; j++) {
            cin >> b[i][j];
        }
    }


    // Grid Traversal, duyet cac o lien ke
    // [i-1][j-1] | [i-1][j] | [i-1][j+1]
    //   [i][j-1] |   [i][j] |   [i][j+1]
    // [i+1][j-1] | [i+1][j] | [i+1][j+1]

    // Directions:   N,  NE,E,SE, S, SW,  W, NW
    // int dx[8] = {-1, -1, 0, 1, 1,  1,  0, -1};
    // int dy[8] = { 0,  1, 1, 1, 0, -1, -1, -1};

}