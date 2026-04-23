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
        int x; int value; cin >> x;
        if (x == 1) {
            cin >> value;
            v.push_back(value);
        }
        if (x ==2) {
            if (!v.empty()) {
                v.pop_back();
            }
        }
    }

    if (v.empty()) {
        cout << "EMPTY";
    } else {
        for (int x : v) cout << x << " ";
    }
}