#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;

int upperbound(vector<int> v, int x) {
    int l=0; int r=v.size(); int count=0;
    while(l<=r) {
        int mid = (l+r)/2;
        if (v[mid] >= x) {
            count++;
            l = mid + 1;
        } else r = mid - 1;
    }

    return count;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; int m; cin >> n >> m;
    vector<int> va;
    vector<int> vb;
    while (n--) {
        int value; cin >> value;
        va.push_back(value);
    }
    while (m--) {
        int value; cin >> value;
        vb.push_back(value);
    }

    // sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());
    // for (int x : vb) cout << x << " ";
    // cout << endl;

    // for (int x : va) 

    for (int x : va) {
        // int *pos
        cout << x << " " << upperbound(vb, x) << endl;
    }


}