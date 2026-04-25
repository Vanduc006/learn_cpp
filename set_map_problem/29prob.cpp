#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif

    string s;
    map<string, int> mp;
    while (cin >> s) {
        mp[s]++;
    }

    for (pair<string, int> p : mp) {
        cout << p.first << " " << p.second << endl;
    }
}