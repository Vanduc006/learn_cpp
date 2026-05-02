#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
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
    vector<char> v;
    while(n--) {
        char value; cin >> value;
        v.push_back(value);
    }

    sort(v.begin(), v.end());
    for (char x : v) cout << x << " ";
    cout << endl;

    sort(v.begin(), v.end(), greater<char>());
    for (char x : v) cout << x << " ";


}