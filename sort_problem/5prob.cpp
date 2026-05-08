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
    for (int i=0; i < n; i++) cin >> a[i];

    map<int, int> mp;
    for (int x : a) {
        mp[x]++;
    }

    int max_num=0;
    int max_count=0;

    for (pair<int, int> p : mp) {
        if (p.second > max_count) {
            max_count = p.second;
            max_num = p.first;
        };
        if (p.second == max_count) {
            if (p.first < max_num) {
                max_num = p.first;
            }
        }
    }

    cout << max_num << " " << max_count;
}