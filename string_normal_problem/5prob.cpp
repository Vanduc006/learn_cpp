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
    // vector<char> v;
    string s;
    while (cin >> c) s.push_back(c);

    // int count = v.size();
    int count=0;
    // cout << count;
    for (int i=s.size()-3; i > 0; i-= 3) {
        s.insert(i, ",");
    }

    for (char c : s) cout << c;
}