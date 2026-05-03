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
    vector<int> va;
    vector<int> vb;
    while (n--) {
        int value; cin >> value;
        va.push_back(value);
    }
    while (m--) {
        int value; cin >> value;
        vb.push_back(value);
    }

    // sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());

    for (int x : va) {
        auto it = lower_bound(vb.begin(), vb.end(), x);
        int index = it - vb.begin();
        cout << x << " " << vb.size() - index << endl;
    }


}