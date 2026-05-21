#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;
int pos[1000005];
int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for (int i=1; i <= n; i++) {
        int value; cin >> value;
        pos[value] = i;
    }
    int ans=1;
    for (int i=2; i <= n; i++) {
        if (pos[i] < pos[i-1]) {
            ans++;
        }
    }
    cout << ans;
}