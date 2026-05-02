#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;

bool compare(pair<int, int> x, pair<int, int> y) {
    int kc1 = x.first * x.first + x.second * x.second;
    int kc2 = y.first * y.first + y.second * y.second;
    if (kc1 != kc2) return kc1 < kc2;
    if (x.first != y.first) return x.first < y.first;
    return x.second < y.second;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<pair<int, int>> v;

    while(n--) {
        int first; int second; cin >> first >> second;
        v.push_back({first, second});
    }

    sort(v.begin(), v.end(), compare);
    for (pair<int, int> x : v) cout << x.first << " " << x.second << endl;

}