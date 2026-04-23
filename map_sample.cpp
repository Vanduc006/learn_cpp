#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // unique key - value (like a pair)
    // sorted by key value
    map<string, int> mp; // pair<string, int>
    mp.insert({"Duc", 20});
    mp["Duc"] = 18; // mp[key]
    mp["Duc1"] = 20; 
    mp["Duc2"] = 21;

    cout << mp["Duc1"] << endl;

    for (pair<string, int> p : mp) cout << p.first << " " << p.second << endl;

    cout << "Iterator" << endl;
    for (map<string, int>::iterator it= mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    // insert O(logN)

}