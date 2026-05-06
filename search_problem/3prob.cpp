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

    auto it1 = lower_bound(v.begin(), v.end(), x);
    if (it1 != v.end()) cout << *it1 << endl;
    else cout << "-1" << endl;

    auto it2 = upper_bound(v.begin(), v.end(), x);
    if (it2 != v.end()) cout << *it2 << endl;
    else cout << "-1" << endl;
    

    if (*it1 == x) cout << it1 - v.begin() << endl;
    else cout << "-1";

    --it2;
    if (*it2 == x) cout << it2 - v.begin() << endl;
    else cout << "-1";

    cout << it2 - it1 + 1 << endl;
}