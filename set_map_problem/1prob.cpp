#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif

    int n; cin >> n;
    set<int> s;
    for (int i=0; i < n; i++) {
        int value; cin >> value;
        s.insert(value);
    }

    cout << s.size();


}