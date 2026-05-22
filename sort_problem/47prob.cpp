#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;
int n; int t; 

bool find(int a[], int n, int time) {
    int ans=0;
    for (int i=0; i < n; i++) {
        ans += time / a[i];
    } 
    return ans >= t;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> t;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a+n);
    int left=0; int right= t * a[0];
    // cout << right;
    int ans=-1;
    while (left <= right) {
        int mid = (left+right)/2;
        if (find(a, n, mid)) {
            cout << mid << endl;
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans;
}