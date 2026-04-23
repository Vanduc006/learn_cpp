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

    int L; int R; cin >> L >> R;
    vector<int>::iterator it;

    for (it=v.begin() + L; it != v.begin() + R + 1; it++) {
        cout << *it << " ";
    }
    cout << endl;
    // vector<int>::reverse_iterator rit;
    for (it= v.begin() + R; it != v.begin() + L - 1; it--) {
        cout << *it << " ";
    }
}