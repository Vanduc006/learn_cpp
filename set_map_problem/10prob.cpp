#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif

    int n; int m; cin >> n >> m;
    map<int, int> mp;

    for (int i=0; i < n; i++) {
        int value; cin >> value;
        if (mp.count(value) == 1) {
            continue;
        } else {
            mp[value]++;
        }
    }

    for (int i=0; i < m; i++) {
        int value; cin >> value;
        if (mp.count(value) == 0) {
            continue;
        } else {
            mp[value]++;
        }
    }

    for (pair<int, int> p : mp) {
        if (p.second == 2) {
            cout << p.first << " ";
        }
    }
}