#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif

    int n; cin >> n;
    vector<pair<int, int>> v;
    for (int i=0; i < n; i++) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        v.push_back(p);
    }

    vector<double> result;
    for (int i=0; i < n; i++) {
        pair<int, int> p = v[i];
        double distinct = sqrt(pow(p.first,2)+pow(p.second,2));
        result.push_back(round(distinct*100)/100);
    }

    for (double x : result) cout << x << " ";
}