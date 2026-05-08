#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;

bool cmp(int x, int y) {
    // if ( x != y ) count++;
    return x > y;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    // int a[n];
    set<int> s;
    for (int i=0; i < n; i++) {
        int value; cin >> value;
        s.insert(value);
    }

    cout << s.size();
}