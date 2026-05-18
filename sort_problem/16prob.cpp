#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <utility>

using namespace std;

using ll = long long;

bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second;
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
    for (int i=0; i < n; i++) {
        int start; int end; 
        cin >> start >> end;
        v.push_back({start, end});
    }
    sort(v.begin(), v.end(), compare);
    // for (pair<int, int> p : v) cout << p.second << " ";

    int end_time = v[0].second;
    int count=1;
    for (int i=0; i < n; i++) {
        if (v[i].first >= end_time) {
            count++;
            end_time = v[i].second;
        }
    }
    cout << count;
}