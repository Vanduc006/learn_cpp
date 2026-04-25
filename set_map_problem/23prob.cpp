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
    map<int, int> mp;
    for (int i=0; i < n; i++) {
        int value; cin >> value;
        mp[value]++;
    }

    for (pair<int, int> p : mp) {
        if (p.second%2==0) {
            cout << p.first << " " << p.second << endl;
        }
    }

    cout << endl;

    for (auto it=mp.rbegin(); it != mp.rend(); it++) {
        if (it->second%2==0) {
            cout << it->first << " " << it->second << endl;
        }
    } 
}