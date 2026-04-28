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
    string t; getline(cin, t);

    map<char, int> m_s;
    map<char, int> m_t;

    for (char x : s) m_s[x]++;
    for (char x : t) m_t[x]++;

    for (char x : s) {
        if (m_s[x] == m_t[x]) {
            continue;
        } else {
            cout << "29tech";
            return 0;
        }
    }
    cout << "28tech";
}