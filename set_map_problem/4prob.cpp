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
    multiset<int> ms;
    for (int i=0; i < n; i++) {
        int value; cin >> value;
        ms.insert(value);
    }

    cin >> n;
    for (int i=0; i < n; i++) {
        int x; int value; cin >> x >> value;
        if (x == 1) {
            ms.insert(value);
        }
        if (x == 2) {
            multiset<int>::iterator it = ms.find(value);
            if (it != ms.end()) {
                ms.erase(it);
            }
            // if (ms.count(value)) {
            //     s.erase(value);
            // }
        }
        if (x == 3) {
            if (ms.count(value) > 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}