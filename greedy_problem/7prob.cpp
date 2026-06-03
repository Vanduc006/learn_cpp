#include <iostream>
#include <bits/stdc++.h>
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
    pair<int, int> p[n];
    for (int i=0; i < n; i++) {
        int start; int end;
        cin >> start >> end;
        p[i] = {start, end};
    }
    sort(p, p+n, compare);

    int count=1;
    int end_time=p[0].second;

    for (int i=1; i < n; i++) {
        if (p[i].first > end_time) {
            count++;
            end_time = p[i].second;
        }
    }
    cout << count;
}