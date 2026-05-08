#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;

int firstPos(int a[], int n, int x) {
    int l=0; int r=n-1; int res=-1;
    while (l <= r) {
        int mid = (l+r)/2;
        if (a[mid] == x) {
            res = mid;
            r = mid-1;
        } else if (a[mid] > x) {
            r = mid -1;
        } else l = mid + 1;
    }
    return res;
}

int lastPos(int a[], int n, int x) {
    int l=0; int r=n-1; int res=-1;
    while (l <= r) {
        int mid = (l+r)/2;
        if (a[mid] == x) {
            res = mid;
            // r = mid-1;
            l = mid + 1;
        } else if (a[mid] > x) {
            r = mid -1;
        } else l = mid + 1;
    }
    return res;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; int x; cin >> n >> x;
    int a[n];
    for (int i=0; i < n; i++) cin >> a[i];

    sort(a, a+n);

    cout << firstPos(a, n, x) << endl;
    cout << lastPos(a, n, x) << endl;
    int *p1 = lower_bound(a, a+n, x);
    cout << p1 - a << endl;
    int *p2 = upper_bound(a, a+n, x);
    cout << p2 - a << endl;
    if (firstPos(a,n,x) < 0 && lastPos(a,n,x) < 0) {
        cout << 0;
    } else {
        cout << lastPos(a,n,x) - firstPos(a,n,x) + 1;
    }
    
}