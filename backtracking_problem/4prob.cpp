#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;

int n; int k;
int a[10005];
int x[10005];

void backtracing(int i, int pos, int tong) {
    for (int j=pos; j <= n; j++) {
        x[i] = a[j];
        tong += a[j];
        if (tong == k) {
            for (int l=1; l <= i; l++) {
                cout << x[l] << " ";
            }
            cout << endl;
        } else if (tong < k) {
            backtracing(i+1, j+1, tong);
        }
        tong -= a[j];
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i=1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    backtracing(1,1,0);
}