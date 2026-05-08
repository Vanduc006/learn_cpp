#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; int m; cin >> n >> m;
    multimap<int, string> mp;
    // map<int, string> mp;

    for (int i=1; i < n+1; i++) {
        int value; cin >> value;
        // mp[value] = "b";
        mp.insert({value,"b"+to_string(i)});
    }

    for (int i=1; i < m+1; i++) {
        int value; cin >> value;
        // mp[value] = "c";
        mp.insert({value,"c"+to_string(i)});
    }

    for (pair<int, string> p : mp) {
        cout << p.second << " ";
    }


}