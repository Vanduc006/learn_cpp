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

    vector<char> v;
    char c;
    while (cin >> c) {
        v.push_back(c);
    }

    // for (char c : v) cout << c;

    if ((v.size()-1)%2==0) {
        cout << v[v.size()/2];
    } else if (v.size() < 3) cout << "NOT FOUND";
    else cout << "NOT FOUND";
}