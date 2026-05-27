#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n;
int a[10005][10005];
// string s;

// right i, j+1
// down i+1, j

void backtracking(int i, int j, string s) {
    if (i == n && j == n) {
        cout << s << endl;
    }
    if (a[i+1][j] == 1 && i+1 <= n) {
        s += 'D';
        backtracking(i+1, j, s);
        s.pop_back();
    }
    if (a[i][j+1] == 1 && j+1 <= n) {
        s += 'R';
        backtracking(i, j+1, s);
        s.pop_back();
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
            cin >> a[i][j];
        }
    }

    backtracking(1, 1, "");
}