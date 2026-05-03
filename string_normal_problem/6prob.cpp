#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
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

    // string *s1 = s;

    sort(v.begin(),v.end());
    // for (auto it = v.begin(); it != v.end(); it++) {
    //     if (*it == 0) v.erase(it);
    //     else break;
    // }

    while (v[0] == '0') {
        v.erase(v.begin());
    }

    for (char c : v) cout << c;
}