#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif

    int n; cin >> n;
    pair<pair<int, int>, int> p[n];
    for (int i=0; i < n; i++) {
        cin >> p[i].first.first >> p[i].first.second >> p[i].second;
    }

    vector<int> v;
    for (int i=0; i < n; i++) {
        int sum = p[i].first.first + p[i].first.second + p[i].second;
        v.push_back(sum);
    }

    for (int x : v) cout << x << " ";
}