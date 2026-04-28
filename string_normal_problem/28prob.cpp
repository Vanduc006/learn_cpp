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

    string s1; getline(cin, s1);
    string s2; getline(cin, s2);

    if (s1.size() > s2.size()) cout << "28tech";
    else if (s1.size() < s2.size()) cout << "29tech";
    else if (s1.size() == s2.size()) {
        if (s1 > s2) cout << "28tech";
        else if (s1 < s2) cout << "29tech";
        else if (s1 == s2) cout << "30tech";
    }
}