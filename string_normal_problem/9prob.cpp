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
    cin.ignore();
    getline(cin, s);
    // cout << s << endl;
    int n; cin >> n;
    // cout << n;
    string res;
    for (int i=0; i < s.size(); i++){
        if (i==n-1) res += "28tech";
        res += s[i];
    }

    cout << res;

}