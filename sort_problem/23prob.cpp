#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;
bool compare(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second != p2.second) {
        return p1.second > p2.second;
    } else {
        return p1.first < p2.first;
    }
}

bool compare2(pair<int, int> p1, pair<int, int> p2) {
    return p1.second > p2.second;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int a[n];
    map<int, int> mp;
    for (int &x : a) {
        cin >> x;
        mp[x]++;
    }

    vector<pair<int, int>> v;
    for (pair<int, int> p : mp) {
        v.push_back({p.first, p.second});
    }
    sort(v.begin(), v.end(), compare);

    for (pair<int, int> p : v) {
        int count=p.second;
        while(count--) {
            cout << p.first << " ";
        }
    }
    cout << endl;
    vector<pair<int, int>> v1;
    for (int x : a) {
        if (mp[x] != 0) {
            v1.push_back({x, mp[x]});
            mp[x]=0;
        }
    }

    stable_sort(v1.begin(), v1.end(), compare2);
    for (pair<int, int> p : v1) {
        int count=p.second;
        while(count--) {
            cout << p.first << " ";
        }
    }
}