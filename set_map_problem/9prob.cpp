#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif

    int n; int m; cin >> n >> m;
    set<int> s;
    for (int i=0; i < n; i++) {
        int value; cin >> value;
        s.insert(value);
    }

    for (int i=0; i < m; i++) {
        int value; cin >> value;
        s.insert(value);
    }

    for (auto it = s.rbegin(); it != s.rend(); it++) {
        cout << *it << " ";
    }
}