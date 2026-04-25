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
    map<string, string> mp;
    cin.ignore();

    for (int i=0; i < n; i++) {
        string id;
        string name;
        getline(cin, id);
        getline(cin, name);
        mp[id] = name;
    }
     
    cin >> n;
    while (n--) {
        string id;
        getline(cin, id);
        auto it = mp.find(id);
        if (it != mp.end()) {
            cout << it->second << endl;
        } else {
            cout << "NOT FOUND" << endl;
        }
    }
}