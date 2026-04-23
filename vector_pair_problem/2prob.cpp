#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n; cin >> n;
    vector<int> v;
    for (int i=0; i < n; i++) {
        int value; cin >> value;
        v.push_back(value);
    }

    int m; cin >> m;
    for (int i=0; i < m; i++) {
        int x; cin >> x;
        if (x == 1) {
            int index; int value; cin >> index >> value;
            if (index >= 0 && index <= v.size()) {
                v.insert(v.begin() + index, value);
            }
        }
        if (x == 2) {
            int index; cin >> index;
            if (index >= 0 && index < v.size()) {
                v.erase(v.begin() + index);
            }
        }
    }

    if (v.empty()) {
        cout << "EMPTY";
    } else {
        for (int x : v) cout << x << " ";
    }
}