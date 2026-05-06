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

    int n; int x; cin >> n >> x;
    vector<int> v(n);
    for (int i=0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    auto it = upper_bound(v.begin(), v.end(), x);
    --it;
    if (it == v.begin()) {
        cout << "NOT FOUND";
        return 0;
    }
    cout << *it << endl;
}