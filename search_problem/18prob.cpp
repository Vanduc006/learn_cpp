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

    int n; int k; cin >> n >> k;
    vector<int> v(n);
    for (int i=0; i < n; i++) cin >> v[i];
    ll ans=0;
    for (int i=0; i < v.size(); i++) {
        auto it1 = lower_bound(v.begin()+1, v.end(), v[i]+k);
        auto it2 = upper_bound(v.begin()+1, v.end(), v[i]+k);
        ans += it2 - it1;
    }
    cout << ans;
}