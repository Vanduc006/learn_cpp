#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;
int n; int h;

bool F(int a[], int n, int height) {
    int ans=0;
    for (int i=0; i < n; i++) {
        if (a[i] > height) {
            ans += a[i] - height;
        }
    }
    return ans >= h;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../../input.txt","r",stdin);
    freopen("../../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> h;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a+n);
    int left=0; int right=a[n-1];
    // cout << right;
    int ans=0;

    while (left <= right) {
        int mid = (left+right)/2;
        // cout << mid << endl;
        if (F(a, n, mid)) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << ans;
}