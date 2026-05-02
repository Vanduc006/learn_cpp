#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;int x; cin >> n >> x;
    vector<int> v;
    while (n--) {
        int value; cin >> value;
        v.push_back(value);
    }

    sort(v.begin(), v.end());

    int l=0; int r=v.size()-1; int res=-1;
    while (l <= r) {
        int mid = (l+r)/2;
        if (v[mid] == x) {
            res = mid;
            // r = mid - 1;
            l = mid + 1;
        } else if ( v[mid] > x) {
            r = mid - 1;
        } else l = mid + 1;
    }
    cout << res;
}