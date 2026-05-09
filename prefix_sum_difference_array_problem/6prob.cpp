#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;
bool cmp(int x, int y) {
    return x > y;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; int q; cin >> n >> q;
    int a[n];
    for (int &x : a) cin >> x;
    int diff_tansuat[n] = {0};
    while(q--) {
        int l; int r;
        cin >> l >> r;
        // --l; --r;
        diff_tansuat[l] += 1;
        diff_tansuat[r+1] -= 1;
    }

    int pre_tansuat[n];
    for (int i=0; i < n; i++) {
        if (i == 0) pre_tansuat[i] = diff_tansuat[i];
        else pre_tansuat[i] = pre_tansuat[i-1] + diff_tansuat[i];
    }
    sort(pre_tansuat, pre_tansuat+n, cmp);
    // for (int x : pre_tansuat) cout << x << " ";
    sort(a, a+n, cmp);

    ll res=0;
    for (int i=0; i < n; i++) {
        res += a[i] * pre_tansuat[i];
    }

    cout << res;

}