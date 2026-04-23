#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n; cin >> n;
    vector<int> v;
    for (int i=0; i < n; i++) {
        int value; cin >> value;
        v.push_back(value);
    }
    reverse(v.begin(), v.end());
    for (int x : v) cout << x << " ";
    cout << endl;
    int L; int R; cin >> L >> R;
    reverse(v.begin() + L, v.begin() + L + 1);
    for (int x : v) cout << x << " ";
}