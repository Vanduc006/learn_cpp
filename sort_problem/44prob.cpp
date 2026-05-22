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
    int a[n];
    for (int &x : a) cin >> x;

    map<int, int> mp;
    int left=0; int right;
    ll ans=0;
    for (right=0; right < n; right++) {
        mp[a[right]]++;
        while (mp.size() > k) {
            mp[a[left]]--;
            if (mp[a[left]] == 0) mp.erase(a[left]);
            left++;
        }
        ans += right - left + 1;

    }
    
    cout << ans;
}