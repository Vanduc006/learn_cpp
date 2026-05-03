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

    char c;
    vector<char> v;
    while (cin >> c) v.push_back(c);

    // for (char &c : v) cout << c;
    
    for (int i=0; i < v.size()-1; i++) {
        if (v[i] + 1 == v[i+1] || v[i] - 1 == v[i+1]) {
            continue;
        } else {
            // cout << v[i] << v[i+1];
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}