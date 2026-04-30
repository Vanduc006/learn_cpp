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
    
    int n; cin >> n;
    vector<int> v;
    vector<int> suf(n+5); // suf(i) so luong phan tu khac nhau
    set<int> s;

    for (int i=0; i < n; i++) {
        int value; cin >> value;
        v.push_back(value);
    }

    for (int i=n; i >= 1; i--) {
        s.insert(v[i]);
        suf[i] = s.size();
    }
    // f(v,8); f(v,6);

    cin >> n;
    for (int i=0; i < n; i++) {
        int value; cin >> value;
        cout << suf[value + 1] << endl;
    }
}