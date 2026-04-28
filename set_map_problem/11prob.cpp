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
    set<int> a;
    set<int> b;
    for (int i=0; i < n; i++) {
        int value; cin >> value;
        a.insert(value);
    }
    
    for (int i=0; i < m; i++) {
        int value; cin >> value;
        b.insert(value);
    }

    for (int x : a) {
        if (b.count(x)) {
            continue;
        } else cout << x << " ";
    }
}