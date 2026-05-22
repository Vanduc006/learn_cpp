#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a; int b; int n; cin >> a >> b >> n;
    ll left=0;
    ll right= n*max(a,b);
    ll ans=-1;

    while (left <= right) {
        ll mid = (left+right)/2;
        ll x=mid/a;
        ll y=mid/b;
        if (x >= (double) n/y ) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << ans;
}