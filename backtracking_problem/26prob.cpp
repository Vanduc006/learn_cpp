#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n; 
int a[1005][1005];
int used[1005][1005];
string res="";
string s="";

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

string findd(string a, string b) {
    string s=a;
    string t=b;

    while (s.size() < t.size()) s = "0"+s;
    while (t.size() < s.size()) t = "0"+t;

    if (s > t) return a;
    else return b;
}

void backtracking(int i, int j) {
    if (i == n && j == n) {
        res = findd(res, s);
    } 
    for (int k=0; k < 4; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];

        if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && !used[i1][j1]) {
            used[i1][j1] = 1;
            s += (char) (a[i1][j1] + '0');
            backtracking(i1, j1);
            s.pop_back();
            used[i1][j1] = 0;
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
            cin >> a[i][j];
        }
    }

    s += (char) (a[1][1] + '0');
    used[1][1] = 1;
    backtracking(1, 1);

    cout << res;
}