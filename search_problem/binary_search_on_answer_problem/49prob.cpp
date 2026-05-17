#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;
int n; int t; 

// void binary_s(int *a, int n) {
//     int l=0; int r=n-1; int res=0;
//     while (l <= r) {
//         int mid = (l+r)/2;
//         if (mid >= t) {
//             l = mid + 1;
//         } else if (mid <= t) {
//             r = mid - 1;
//         }
//         res += a[mid];
//     }

//     // return res;
//     cout << res;
// }

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