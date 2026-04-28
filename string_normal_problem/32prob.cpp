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

    string s; getline(cin, s);
    stringstream ss(s);
    string w;
    map<string, int> mp;
    while (ss >> w) {
        mp[w]++;
    } 

    for (pair<string, int> p : mp) cout << p.first << " " << p.second << endl; 
}