#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n; int k; int s;
int ans=0;
int a[10005];

void backtracking(int i) {
    for (int j=a[i-1]+1; j <= n-k+i; j++) {
        a[i]=j;
        if (i == k) {
            int tong=0;
            for (int m=1; m <= k; m++) {
                tong += a[m];
            }
            if (tong == s) {
                ans++;
            }
        } else {
            backtracking(i+1);
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

    cin >> n >> k >> s;
    backtracking(1);
    cout << ans;
}