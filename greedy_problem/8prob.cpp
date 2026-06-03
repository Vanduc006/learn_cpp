#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
bool compare(pair<pair<int, int>, int> p1, pair<pair<int, int>, int> p2) {
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
    pair<pair<int, int>, int> p[n];
    // id dealine profit
    for (int i=0; i < n; i++) {
        int id; int dealine; int profit;
        cin >> id >> dealine >> profit;
        p[i] = {{id, dealine}, profit};
    }
    sort(p, p+n, compare);
    // sort by profit
    int x[n] = {0};
    int current_dealine = 0;
    int ans=0;
    for (auto it : p) {
        // if (current_dealine < it.first.second) {
        //     ans += it.second;
        //     current_dealine = it.first.second;
        // }
        for (int j=it.first.second-1; j >= 0; j--) {
            if (x[j] == 0) {
                ans += it.second;
                x[j] = 1;
                break;
            }
        }
    }
    cout << ans;

}