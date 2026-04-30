#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cin.ignore();
    map<string, vector<string>> mp;

    for (int i=0; i < n; i++) {
        string s; getline(cin, s);

        size_t found = s.find("-");
        string team1 = s.substr(0,found - 1);
        string team2 = s.substr(found + 2);
        mp[team1].push_back(team2);
        mp[team2].push_back(team1);
        // cout << "next";
    }

    for (pair<string, vector<string>> p : mp) {
        cout << p.first << " : ";
        sort(p.second.begin(), p.second.end());
        // for (string s: p.second) 
        for (int i=0; i < p.second.size(); i++) {
            cout << p.second[i];
            if ( i < p.second.size() - 1) cout << ", ";
            // cout << ", ";
        }
        cout << endl;
    }


}