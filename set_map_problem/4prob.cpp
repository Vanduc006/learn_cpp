#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif

    int n; cin >> n;
    set<int> s;
    for (int i=0; i < n; i++) {
        int value; cin >> value;
        s.insert(value);
    }

    cin >> n;
    for (int i=0; i < n; i++) {
        int x; int value; cin >> x >> value;
        if (x == 1) {
            s.insert(value);
        }
        if (x == 2) {
            if (s.count(value)) {
                s.erase(value);
            }
        }
        if (x == 3) {
            if (s.count(value)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}