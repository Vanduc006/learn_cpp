#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

bool is_exist(vector<pair<int, int>> &v, int value) {
    for (int i=0; i < v.size(); i++) {
        if (v[i].first == value) {
            v[i].second++;
            return true;
        }
    }
    return false;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif

    int n; cin >> n;
    vector<pair<int, int>> v;

    for (int i=0; i < n; i++) {
        int value; cin >> value;
        pair<int, int> p;

        if (is_exist(v, value)) {
            continue;
        } else {
            p.first = value;
            p.second = 1;
            v.push_back(p);
        }
    }

    for (int i=0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }
}