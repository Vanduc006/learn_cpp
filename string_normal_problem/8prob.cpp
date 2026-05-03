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
    string s;
    while (cin >> c) s.push_back(c);

    string text="28tech";

    string res = "";
    for (char c : s) {
        if (text.find(c) == string::npos) res += c;
    }

    if (res.size() == 0) cout << "EMPTY";

    for (char c : res) cout << c;
}