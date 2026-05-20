#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
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
    pair<int, int> a[n];
    for (int i=0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a+n, compare);

    int end_time = a[0].second;
    int count=0;
    for (int i=0; i < n; i++) {
        if (a[i].first <= end_time) {
            end_time = a[i].second;
            count++;
        }
    }
    cout << count;
}