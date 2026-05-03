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

    string s;
    getline(cin, s);

    string res;
    for (char c : s) {
        if (res.find(c) != string::npos) {
            cout << c;
            return 0;
        }
        res += c;
    }

    cout << "NONE";
}