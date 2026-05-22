#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
bool F(int a[], int n, int k, int sum) {
    int dem=0;
    int tong=0;
    for (int i=0; i < n; i++) {
        tong += a[i];
        if (tong > sum) {
            ++dem;
            tong = a[i];
        }
    }
    ++dem;
    return dem <= k;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; int k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    int left=*max_element(a, a+n);
    int right= accumulate(a, a+n, 0);
    ll ans=-1;
    while (left <= right) {
        int mid=(left+right)/2;
        if (F(a, n, k, mid)) {
            ans = mid;
            right = mid-1;
        } else {
            left = mid+1;
        }
    }
    cout << ans;
}