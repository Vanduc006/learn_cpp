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

    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    map<int, int> mp;
    int ans=1;
    int left=0; int right;
    for (right=0; right < n; right++) {
        mp[a[right]]++;
        while (mp[a[right]] > 1) {
            mp[a[left]]--;
            ++left;
        }
        ans = max(ans, left - right + 1);
    }
    cout << ans;

}