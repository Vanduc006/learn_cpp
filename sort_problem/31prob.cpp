#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;
bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.first < p2.first;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; int s; cin >> n >> s;
    pair<int, int> a[n];
    for (int i=0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a+n,compare);
    // for (pair<int, int> p : a) cout << p.first;
     for (int i=0; i < n; i++) {
        if (s < a[i].first) {
            cout << "NO";
            return 0;
        } else {
            s += a[i].second;
        }
    }
    cout << "YES";

}