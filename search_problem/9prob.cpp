#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;

bool binary_search(int a[], int n, int x) {
    int l=0;
    int r=n;
    while (l <= r) {
        int mid = (l+r)/2;
        if (a[mid] == x) {
            return true;
        } else if (a[mid] > x) {
            r = mid - 1;
        } else l = mid + 1;
    }
    return false;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int a[n];
    for (int i=0; i < n; i++) cin >> a[i];
    sort(a, a+n);

    int q; cin >> q;
    while (q--) {
        int value; cin >> value;
        if (binary_search(a, n, value)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}