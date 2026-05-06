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

    int n; int m; cin >> n >> m;
    vector<int> va(n);
    vector<int> vb(m);
    for (int i=0; i < n; i++) cin >> va[i];
    for (int i=0; i < m; i++) cin >> vb[i];
    // cout << vb.size() << endl;
    sort(vb.begin(), vb.end());

    for (int x : va) {
        auto it = lower_bound(vb.begin(), vb.end(), x);
        // cout << it - vb.begin() << " " << *it << endl;
        int index = it - vb.begin();
        --index;
        // handle case that index at 1 -> -1 + 1 = 0 
        cout << index + 1 << " ";
    }
}