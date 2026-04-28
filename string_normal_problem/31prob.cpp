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
    int cnt[256]={0};
    for (char x : s) cnt[x]++;
    for (int i=0; i < 256; i++) {
        if (cnt[i]) cout << (char) i << " " << cnt[i] << endl;
    }

    // unordered_set<char> us;
    // for (char x : s) {
    //     us.insert(x);
    // }
    // for (char x : us) {
    //     cout << x << endl;
    // }
}

// dem 