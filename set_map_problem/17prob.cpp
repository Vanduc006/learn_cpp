#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif

    char c;
    map<char, int> mp;

    while (cin >> c) {
        mp[c]++;
    }
    // for (pair<char, int> p : mp) cout << p.first << " " << p.second;
    // cout << endl;
    map<char, int>::iterator it = mp.begin();
    // cout << it->first << " " << it->second << endl;

    // map<char, int>::reverse_iterator rit = mp.rbegin();
    // cout << rit->first << " " << rit->second << endl;

    set<pair<char, int>> s_min;
    set<pair<char, int>> s_max; 
    pair<char, int> min; min.first = it->first; min.second = it->second;
    pair<char, int> max = min;

    for (pair<char, int> p : mp) {
        if (p.second < min.second) {
            min = p;
        }

        if (p.second > max.second) {
            max = p;
        }
    }

    for (pair<char, int> p : mp) {
        if (p.second == min.second) {
            s_min.insert(p);
        } 
        if (p.second == max.second) {
            s_max.insert(p);
        }
    }

    auto max_it = s_max.begin();
    cout << max_it->first << " " << max_it->second << endl;
    auto min_it = s_min.rbegin();
    cout << min_it->first << " " << min_it->second << endl;
    
    cout << mp.size();


}